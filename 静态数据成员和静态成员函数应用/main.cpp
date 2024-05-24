/*
������������ĳ��Ʒ����Ϊ30Ԫ�������̵��ڸ�������������Ʒ�����й̶����ۿۣ������ۿ۵�������������3������Ա������Ʒ����������۵�������������մ���Ʒ�������۶ƽ���ۼۡ����main()���������Գ��򡣱�����֪��3������Ա�Ĺ��ż����۴���Ʒ������Ϊ��1001��5��1002��20��1003��75��
��������ʽ������ռһ�У�Ϊ�����ۿۡ�
�������ʽ�����ռһ�У�������������1����Ϊ���մ���Ʒ�������۶��2����Ϊƽ���ۼۡ�������λС�����������ÿո�����
���������롿8
�����������2760.00  27.60
������˵���������ۿ�Ϊ8%������ԭ��92%���ۡ����մ���Ʒ�������۶�Ϊ2760.00��ƽ���ۼ�Ϊ27.60��
�����ֱ�׼�����⹲20�֣�2�����Ե㣬ÿ�����Ե�10�֡�

�����˵�����������ʹ���࣬��main()�����а��ո�������ֵ��������ͨ�����ú������������㡣����Ʒ�۸��ۿۡ������ۿ����Ʒ�����ܼ�������Ϊ��̬���ݳ�Ա���ʵ�ʹ�þ�̬��Ա�������ǻ��ڶ���ĳ��򲻵÷֡�


*/

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

class CSale
{
public:
	CSale(const int salesVolume)
		: m_salesVolume(salesVolume)
	{
		g_salesVolume += salesVolume;
		g_sales = g_salesVolume * g_price;
	}

	double static get_avg_price()
	{
		return g_discountSales / g_salesVolume;
	}

	double static get_sales()
	{
		return g_discountSales;
	}

	void static set_discount(int discount)
	{
		g_discount = discount;
		g_discountSales = g_sales * (100 - g_discount) / 100;
	}

private:
	//std::string m_id;
	int m_salesVolume = 0;

	const double static g_price;
	int static g_discount;
	double static g_sales;
	double static g_discountSales;
	int static g_salesVolume;
};

const double CSale::g_price = 30.0f;
int CSale::g_discount = 0;
double CSale::g_sales = 0.0f;
double CSale::g_discountSales = 0.0f;
int CSale::g_salesVolume = 0;

int main(int argc, char **argv)
{
	std::vector<CSale> saleVec{
		5, 20, 75
	};

	int discount = 0;

	std::cin >> discount;

	CSale::set_discount(discount);

	std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(2) 
	<< CSale::get_sales() << " " << CSale::get_avg_price() << std::endl;

	return 0;
}