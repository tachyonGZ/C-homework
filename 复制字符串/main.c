/*
��������

��һ�ַ���������n���ַ���дһ��������ָ�뷽��ʵ�ֽ����ַ����дӵ�m���ַ���ʼ��ȫ���ַ����Ƴ�Ϊ��һ���ַ���������mС��n��

������ʽ

�������У���һ����һ���ַ������ڶ�����������m��

�����ʽ

���һ�У����������������ƺ���ַ�����

��������

You are a student.

5

�������

are a student.
*/

#include <stdio.h>

int main(int argc, char **argv)
{
	char s[128];
	char *p = s;
	unsigned int d = 0;
	scanf("%[^\n]%*c", s);
	scanf("%d", &d);
	p += d - 1;
	printf("%s", p);
	return 0;
}