/*
��������������ƽ��ֱ������ϵ�У�����Point�����������ݳ�Ա��x(������)��y(������)�����ɳ�Ա������Ҫ��ʹ�ó�Ա���������������롣���main()�������Ե�(0��0)��(3��4)��Ϊ�������ݣ����Գ���

��������ʽ������û�����룬��ʼ�������ɹ��캯����ɡ�
�������ʽ�����ռһ�У�Ϊ�������������롣����2λС����
���������롿��
�����������5.00
������˵��������(0,0)��(3,4)֮��ľ���Ϊ5.00��
�����ֱ�׼�����⹲15�֣�1�����Ե㡣

�����˵�����������ʹ���࣬��main()�����а��ո�������ֵ��������ͨ�����ú������������㡣�ǻ��ڶ���ĳ�����δ����Ҫ����ɲ��÷֡�
*/
#include <iostream>
#include <iomanip>
#include <cmath>

class CPoint
{
public:
	CPoint(int x, int y)
		: m_x(x), m_y(y)
	{
		;
	}

	double distance_to(const CPoint& other) const
	{
		return std::sqrt(std::pow((other.m_x - m_x), 2) + std::pow((other.m_y - m_y), 2));
	}
private:
	int m_x = 0, m_y = 0;
};

int main(int argc, char **argv)
{
	CPoint pa[2] = {
		{0, 0},
		{3, 4}
	};

	std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(2) << pa[0].distance_to(pa[1]) << std::endl;
	return 0;
}