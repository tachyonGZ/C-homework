/*��������

�󷽳�ax2+bx+c=0�ĸ�����3�������ֱ���b*b��4ac����0������0��С��0ʱ�ĸ�����������������������a��b��c��ֵ����ע�����û��˵����һԪ���η��̣�����Ҫ����aΪ����������

������ʽ

����һ�У�ֻ����3�������������ڳ���������Ϊdouble�������ͣ�����a��b��c��ֵ��

�����ʽ

���һ�У��������̵ĸ���С���㱣����λ����Ϊһ�����������һ��������������ʵ�������������ʵ����ʵ������������������ʵ�����Կո�ָ�������������������������������������������������������Կո�ָ���

��������

1 2 3

�������

-1.00+1.41i  -1.00-1.41i*/

#include <stdio.h>
#include <math.h>

void cal(int a, int b, int c)
{
	int delta = b * b - 4 * a * c;
	double n1 = (double ) - b / (2 * a);
	if(a == 0)
	{
		printf("%.2f", (double) -c / b);
	}
		else
		{
		if(delta > 0)
		{
			double n2 = sqrt((double)delta) / (2 * a);
			printf("%.2f %.2f", n1 + n2, n1 - n2);
		}
		else if(delta < 0)
		{
			double n2 = sqrt((double) - delta) / (2 * a);
			printf("%.2f+%.2fi %.2f-%.2fi", n1, n2, n1, n2);
		}
		else
		{
			printf("%.2f", n1);
		}
	}
}

int main(int argc, char **argv)
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	cal(a, b ,c);
	return 0;
}