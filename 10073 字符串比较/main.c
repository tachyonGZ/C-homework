/*
���������������ַ����ȽϹ��̶Ը����������ַ������бȽϣ����������Ϊ0������������Ϊ��Ӧ�����ַ��Ĳ��Ҫ��ʵ�ֶԸ����ַ����ıȽϡ�Ҫ��������ú���ʵ�������ַ����ıȽϡ�int stringcmp(char *str1 ,char *str2 )
��������ʽ����һ��Ϊһ������N����ʾ�������ݵ���������������N����ÿ�а��������ַ������ַ���֮���ɿո�ָ���
�������ʽ�������N�У�ÿ��Ϊ��Ӧ����һ�е������ַ����ıȽϽ����
���������롿3
                    Happy Help
                    Help Help
                    Help Happy
�����������- 4
                    0
                    4
������˵��������3���ַ�������1��Ϊ"Happy"��"Help",��2��Ϊ"Help"��"Help"����3��Ϊ"Help"��"Happy";���ȽϽ���ֱ�Ϊ-4��0��4��
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int mystrcmp(const char *s1, const char *s2)
{
	unsigned int i = 0;
	for(; i < sizeof(s1); i++)
	{
		if(s1[i] != s2[i])
		{
			return s1[i] - s2[i];
		}
		else
		{
			if(s1[i] == '\0' && s2[i] == '\0')
			{
				return 0;
			}
		}
	}

	return 0;
}

int main(int argc, char **argv)
{
	unsigned int n = 0;
	scanf("%d", &n);
	unsigned int i = 0;
	for(; i < n; i++)
	{
		char s1[128];
		char s2[128];
		scanf("%s%s", s1, s2);
		printf("%d\n", mystrcmp(s1, s2));
	}
	return 0;
}