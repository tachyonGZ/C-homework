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

	friend double get_distance(const CPoint &p1, const CPoint &p2);

private:
	int m_x = 0, m_y = 0;
};

double get_distance(const CPoint &p1, const CPoint &p2)
{
	return std::sqrt(std::pow((p1.m_x - p2.m_x), 2) + std::pow((p1.m_y - p2.m_y), 2));
}

int main(int argc, char **argv)
{
	CPoint pa[2] = {
		{0, 0},
		{3, 4}
	};

	std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(2) << get_distance(pa[0], pa[1]) << std::endl;
	return 0;
}