/*
��������������дһ�����ڶ���ĳ�������뾶������Բ���ܳ�������������ʵ����ʾ�����һ��Բ�࣬��������һ�����ݳ�Աradius��Բ�İ뾶�������ɳ�Ա�����������ܳ���length( )�����������area( )������뾶��set()������й����ݵ�show()�����main()���������Գ���
��������ʽ������һ����������ʾԲ�İ뾶��
�������ʽ�����ռһ�У���2�����ݡ���1ΪԲ���ܳ�����2��ΪԲ�����������2λС��(��С����ʽ����Ŀ��Ʒ�Ϊsetiosflags(ios::fixed)�����nλС���Ŀ��Ʒ�Ϊsetprecision(n)����Ҫ�򿪡�iomanip��ͷ�ļ�)��
���������롿10
�����������62.80 314.00

������˵�����뾶Ϊ10��Բ���ܳ�������ֱ�Ϊ62.80��314.00��

�����ֱ�׼������30�֣���2�����Ե㣬ÿ�����Ե�15�֡�
�����˵�����������ʹ���࣬��main()�����д�������ͨ�����ú�������Բ�İ뾶�����������ǻ��ڶ���ĳ��򲻵÷֡�
*/

#include <iostream>
#include <iomanip>
#include <iterator>

class CCircle
{
private:
	constexpr double static PI = 3.14;

	unsigned int m_radius;

public:
	CCircle(unsigned int radius)
		: m_radius(radius)
	{
		;
	}

	CCircle &set(unsigned int radius)
	{
		m_radius = radius;
		return *this;
	}


	const double length() const
	{
		return PI * 2 * m_radius;
	}

	const double area() const
	{
		return PI * m_radius * m_radius;
	}

	CCircle &show(std::ostream &out)
	{
		out << std::setiosflags(std::ios::fixed) << std::setprecision(2) << length() << " " << area();
		return *this;
	}
};

int main(int argc, char **argv)
{
	std::istream_iterator<unsigned int> input_uint(std::cin);
	CCircle circle(*input_uint);
	circle.show(std::cout);
	return 0;
}