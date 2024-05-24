/*
������������  ����������Shape������������3�������ࣺCircle(Բ��)��Square(������)��Rectangle(����)��
            ����ָ�롢�麯��printLength()��printArea()�ֱ�����������ߵ�������ܳ�������ͼ�ε������ڶ������ʱ������
            ����ʵ��һ��ͨ�õĺ������������ܳ���������Ҫ�����Ǻ���ͼ�Ρ�
            Ҫ����main()�У����ù��캯����ʼ���������������cir(4)��squa(5)��rect(2,5)�� ��Ƴ������β���������������printLength()��printArea()�Ĺ��ܡ�
            ��ʾ��Բ����ȡֵ3.14�����������λС����
��������ʽ����
�������ʽ�����ռ���С�ÿ������Ϊ��������ָ��������ܳ���������������ÿո�����
���������롿û�����롣
�����������

       25.12  50.24

       20.00  25.00

       14.00  10.00
������˵����cir������ܳ�Ϊ25.12�����Ϊ50.24��squa������ܳ�Ϊ20.00�����Ϊ25.00��rect������ܳ�Ϊ14.00�����Ϊ10.00��
�����ֱ�׼�����⹲35�֣�1�����Ե㡣

�����˵�������������main()�����а��ո�������ֵ���������������cir������ܳ��������squa������ܳ��������rect������ܳ��������δ����Ҫ�������÷֡�
*/

#include <iostream>
#include <iomanip>


class Shape
{
public:
    virtual double printLength() const = 0 ;
    virtual double printArea() const = 0;
    static void print(const Shape * shape)
    {
        if(shape != nullptr)
        {
            std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(2) << shape -> printLength() << " " << shape -> printArea() << std::endl;
        }
    }
};



class Circle : public Shape
{
private:
    double m_r;
public:
    Circle(double r)
        : m_r(r)
    {
        ;
    }
    
    double printLength() const
    {
        return m_r * 3.14f * 2;
    }

    double printArea() const 
    {
        return m_r * m_r * 3.14f;
    }
};

class Square : public Shape
{
private:
    double m_a;
public:
    Square(double a)
        : m_a(a)
    {
        ;
    }

    double printLength() const 
    {
        return m_a * 4;
    }

    double printArea() const
    {
        return m_a * m_a;
    }
};

class Rectangle : public Shape
{
private:
    double m_a, m_b;
public:
    Rectangle(double a, double b)
        : m_a(a), m_b(b)
    {
        ;
    }

    double printLength() const
    {
        return 2 * (m_a + m_b);
    }

    double printArea() const 
    {
        return m_a * m_b;
    }
};

int main(int agrc, char **argv)
{
    Circle cir(4);
    Square squa(5);
    Rectangle rect(2, 5);
    
    Shape::print(&cir);
    Shape::print(&squa);
    Shape::print(&rect);
    return 0;
}