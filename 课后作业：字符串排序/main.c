/*
��������

��������������n�����ַ���������һ������ָ�뷽�������ǰ���ASCII���С�����˳������Ȼ���������������n�����ź�����ַ�������n������10��ÿ���ַ����ĳ��Ȳ�����80��

������ʽ

����n+1�У���һ����������n���ڶ��е���n+1����n���ַ�����

�����ʽ

���n�У���������õ�n���ַ�����

��������

5
Bbbb b
Aaaa a
Ccccc c
Eeeee e
Ddddd

�������

Aaaa a

Bbbb b

Ccccc c

Ddddd

Eeeee e

*/

#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	char s[10][81];
	char *pList[10];
	unsigned int n = 0;
	scanf("%d", &n);
	getchar();
	unsigned int i = 0;
	for(;i < n; i++)
	{
		//gets(s[i]);
		scanf("%[^\n]%*c", s[i]);
		pList[i] = s[i];
	}

	for(i = 0; i < n; i++)
	{
		unsigned min = i;
		unsigned int j = i;
		for(; j < n ;j++)
		{
			if(strcmp(pList[min], pList[j]) > 0)
			{
				min = j;
			}
		}

		char *temp = pList[i];
		pList[i] = pList[min];
		pList[min] = temp;
	}

	for(i = 0; i < n; i++)
	{
		printf(i == n - 1?"%s":"%s\n", pList[i]);
	}
	return 0;
}