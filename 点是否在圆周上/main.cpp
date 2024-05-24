/*
������������	����Point�������㣬������һ����Ԫ���������������롣
			����Point���������Բ��Circle�࣬����Բ�ģ�Point��ĵ㣩���뾶�����캯����ʼ��Բ����Ա�����ж�ĳ����m�Ƿ���Բ���ϡ�
			���main()��������(1,2)ΪԲ�ġ�5Ϊ�뾶��mΪ(6,2)���в��ԡ�

��������ʽ���ޡ�ʹ�ù��캯�����г�ʼ����
�������ʽ�����Ϊ1��0����ʾm���Ƿ���ָ��Բ���ϵ��жϽ����1��ʾm����ָ��Բ���ϣ�0��ʾm�㲻��Բ���ϡ�

���������롿��
�����������1
������˵����main()�����У���(1,2)ΪԲ�ġ�5Ϊ�뾶����Բ����ͨ�������жϵ��Ƿ���Բ���ϵĺ������õ����ۣ�m(6,2)����Բ���ϡ�

�����ֱ�׼������1�����Ե㣬��30�֡�

�����˵�������������main()�����а��ո�������ֵ������������жϵ��Ƿ���Բ���ϵĽ����δ����Ҫ�������÷֡�
*/

#include <iostream>
#include <cmath>

class Point
{
private:
	int m_x, m_y;
public:
	Point(int x, int y)
		: m_x(x), m_y(y)
	{
		;
	}
	
	int operator-(const Point &other) const
	{
		return (this->m_x - other.m_x) * (this->m_x - other.m_x) +(this->m_y - other.m_y) * (this->m_y - other.m_y);
	}
};

class Circle
{
private:
	Point m_center;
	int m_radius;
public:
	Circle(const Point &center, int radius)
		: m_center(center), m_radius(radius)
	{
		;
	}

	bool is_on_boundary(const Point &p)
	{
		return m_radius * m_radius == p - m_center;
	}
};

int main(int argc, char **argv)
{
	Circle cir(Point(1, 2), 5);
	if(cir.is_on_boundary(Point(6, 2)))
		std::cout << "1";
	else
		std::cout << "0";

	return 0;
};