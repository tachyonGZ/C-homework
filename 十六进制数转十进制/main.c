/*��������

дһת��������ʵ��ʮ����������ʮ��������ת����������������һ��ʮ���������������Ӧ��ʮ��������ת��������ת��������ɡ�

������ʽ

����һ�У�ֻ����һ��ʮ�����������������ĸ�ɴ�дҲ��Сд����A0��a0��ʾͬ��������

�����ʽ

���һ�У������Ӧ��ʮ��������

��������

A0

�������

160*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int htod(char c)
{
	if(isdigit(c))
	{
		return c - '0';
	}
	else if(isupper(c))
	{
		return c - 'A' + 10;
	}
	else
	{
		return c - 'a' + 10;
	}
}

int hstod(char *s)
{
	unsigned int i = strlen(s);
	int sum = 0;
	unsigned int base = 1;
	for(; i > 0; i--)
	{
		sum += htod(s[i-1]) * base;
		base *= 16;
	}
	return sum;
}

int main(int argc, char **argv)
{
	char s[32];
	scanf("%s", s);
	printf("%d", hstod(s));
	return 0;
}