/*
������������	Ҫ�������塢��Բ���ı���������Գ����һ�������Ļ���ContainerΪ�����࣬�����ж���һ�����������ݳ�Աradius(�����ݿ�����Ϊ�����εı߳�����İ뾶��Բ�������Բ�뾶)���Լ��������Ĵ��麯��area()��
			�ɴ˳�����������Ҫ�����������࣬���û���ָ����麯�����ֱ��������ͼ�εı������
			Ҫ����main()�У����ù��캯����ʼ���������������cube(6)��global(5)��cylinder(5,16)�� ��Ƴ������β��������������м���������area()�������ܡ�
			��ʾ��Բ����ȡֵ3.14�����������λС����
��������ʽ����
�������ʽ���������������������ָ������ı��������������һ���ո�����
���������롿û�����롣
�����������216.00  314.00  659.40

������˵����cube����ı����Ϊ216.00��global����ı����Ϊ314.00��cylinder����ı����Ϊ659.40��
�����ֱ�׼�����⹲35�֣�1�����Ե㡣

�����˵�������������main()�����а��ո�������ֵ���������������cube����global����cylinder����ı������δ����Ҫ�������÷֡�
*/

#include <iostream>
#include <iomanip>
#include <vector>

class Container
{
public:
	double m_radius;
public:
	Container(double radius)
		: m_radius(radius)
	{
		;
	}

	virtual double get_surface() const = 0;

	static void print(const Container *container)
	{
		if(container != nullptr)
		{
			std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(2) << container -> get_surface() << " ";
		}
	}
};

class Cube : public Container
{
public:
	Cube(double radius)
		: Container(radius)
	{
		;
	}

	double get_surface() const
	{
		return m_radius * m_radius * 6;
	}
};

class Global : public Container
{
public:
	Global(double radius)
		: Container(radius)
	{
		;
	}

	double get_surface() const
	{
		return m_radius * m_radius * 3.14 * 4;
	}	
};

class Cylinder : public Container
{
public:
	double m_h;
public:
	Cylinder(double radius, double h)
		: Container(radius), m_h(h)
	{
		;
	}

	double get_surface() const
	{
		return (m_radius * m_radius * 3.14) * 2 + (m_radius * 2 * 3.14) * m_h;
	}	
};

int main(int agrc, char **argv)
{
	Cube cube(6);
	Global global(5);
	Cylinder cylinder(5,16);

	Container::print(&cube);
	Container::print(&global);
	Container::print(&cylinder);
	return 0;
}