/*
��������

����һ�����֣��ҳ����д�д��ĸ��Сд��ĸ���ո������Լ������ַ����ж��١���ָ�뷽��ʵ�֡�

������ʽ

����һ�У�����һ�ַ������ַ������ַ�������80������

�����ʽ

���һ�У������д�д��ĸ��Сд��ĸ���ո������Լ������ַ����ж��ٸ���������ֵ֮���Կո�ָ���

��������

It is a dog. 2 or 3 years old?

�������

1 17 8 2 2
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char **argv)
{
	unsigned int ua = 0, la = 0, d = 0, space = 0, other = 0;
	char s[81];
	scanf("%[^\n]%*c", s);
	unsigned int i = 0;
	for(;i < strlen(s); i++)
	{
		char c = s[i];
		if(isalpha(c))
		{
			if(islower(c))
				la++;
			else
				ua++;
		}
		else if(isdigit(c))
			d++;
		else if(isspace(c))
			space++;
		else
			other++;
	}
	printf("%d %d %d %d %d", ua, la, space, d, other);
	return 0;
}