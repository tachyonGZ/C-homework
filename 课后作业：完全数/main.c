/*
��������

��ȫ��������һ��������������100����һ����ȫƽ������������268Ҳ��һ����ȫƽ��������̳������m��n֮��������ȫ��������m��n��������n>m��

������ʽ

����һ�У���������m��n��

�����ʽ

���һ�У����m��n���������ȫ��������֮���Կո�ָ�����û�У������no��

��������

1 10000

�������

        21 261 1581
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main(int agrc, char **argv)
{
	int a, b;
	scanf("%d%d", &a, &b);
	int flag = 0;
	for(; a <= b; a++)
	{
		int x = (int)sqrt(a + 100);
		int y = (int)sqrt(a + 268);
		if(x * x == a + 100 && y * y == a + 268)
		{
			flag = 1;
			printf("%d ", a);
		}
	}

	if(!flag)
	{
		printf("no");
	}
	return 0;
}