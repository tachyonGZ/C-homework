/*��������

��дһ��������ʵ�δ���һ���ַ��������Ȳ�����30����ͳ�ƴ��ַ�������ĸ�����֡��ո�������ַ��ĸ��������������������ַ����Լ���������Ľ����

������ʽ

����һ�У�����һ�ַ�����

�����ʽ

���һ�У��ַ�������ĸ�����֡��ո�������ַ��ĸ�����������ֵ֮���Կո�ָ���

��������

My class is computer_4.

�������

      17 1 3 2

*/
#include <stdio.h>
#include <ctype.h>

void count(char *s)
{
	unsigned int n = 0, a = 0, space = 0, other = 0;
	unsigned int i = 0;
	for(; s[i] != '\0'; i++)
	{
		if(isalpha(s[i]))
		{
			a++;
		}
		else if(isdigit(s[i]))
		{
			n++;
		}
		else if(isspace(s[i]))
		{
			space++;
		}
		else
		{
			other++;
		}
	}
	printf("%d %d %d %d", a, n, space, other);
}

int main(int argc, char **argv)
{
	char s[31];
	scanf("%[^\n]%*c", s);
	count(s);

	return 0;
}