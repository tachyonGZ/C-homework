/*��������

��һ�������У�2/1��3/2��5/3��8/5��13/8��21/13...���������е�ǰn��֮�͡�n��ֵ��scanf���롣

����double�����������ݣ�

������ʽ

����һ�У�����n��ֵ��

�����ʽ

���һ�У�����ǰn��֮�ͣ�����С�����6λ��

��������

2

�������

3.500000*/
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(int argc, char **argv)
{
	int a1 = 1;
	int a2 = 2;
	unsigned int n = 0;
	scanf("%d", &n);
	unsigned int i = 0;
	double sum = 0.0f;
	for(; i < n; i++)
	{
		sum += (double)a2 / a1;

		a2 += a1;
		a1 = a2 - a1;
	}
	printf("%.6f", sum);
	return 0;
}