/*
��������������̬����һ���������飬����5��ѧ��������(ѧ�š�1�ųɼ�)������ָ�������ָ�룬ͳ��ƽ���ɼ��������1��3��5��ѧ�������ݡ�
��������ʽ�������ɳ�Ա������ɡ���������5��ѧ����ѧ�źͳɼ����������ÿո�����
�������ʽ�����ռ4�С���һ��Ϊƽ���ɼ�����������Ϊ��1��3��5��ѧ�������ݡ�����С�����2λ��
���������롿1001 90.5 1002 86.0 1003 92.5 1004 98.0 1005 80
�����������89.40

            1001 90.50

            1003 92.50

            1005 80.00
������˵����5��ѧ����ѧ�źͳɼ��ֱ�Ϊ��1001��90.5��1002��86��1003��92.5��1004��98.0��1005��80��ƽ���ɼ�Ϊ89.40����1��3��5��ѧ��������Ϊ��1001��90.50��1003��92.50��1005��80.00��
�����ֱ�׼�����⹲10�֣�2�����Ե㣬ÿ�����Ե�5�֡�

�����˵�����������ʹ���࣬��main()�����д������󡣷ǻ��ڶ���ĳ��򲻵÷֡�
*/

#include <iostream>
#include <iomanip>
#include <string>

class CStu
{
public:
    double static get_avg_grade(const CStu *pStu, const size_t num)
    {
        double total = 0;
        for(size_t i = 0; i < num; i++)
        {
           total += pStu[i].get_grade();
        }
        return total / num;
    }

    void static input(CStu *pStu, const size_t num)
    {
        for(size_t i = 0; i < 5; i++)
        {
            std::cin >> pStu[i].m_id >> pStu[i].m_grade;
        }
    }

    double get_grade() const
    {
        return m_grade;
    }

    const std::string &get_id() const
    {
        return m_id;
    }

private:
    std::string m_id;
    double m_grade = 0.0f;
};

int main(int argc, char **argv)
{
    CStu *a = new CStu[5];
    CStu::input(a, 5);
    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(2) 
        << CStu::get_avg_grade(a, 5) << '\n'
        << a[0].get_id() << ' ' << a[0].get_grade() << '\n' 
        << a[2].get_id() << ' ' << a[2].get_grade() << '\n' 
        << a[4].get_id() << ' ' << a[4].get_grade() << std::endl;
	return 0;
}