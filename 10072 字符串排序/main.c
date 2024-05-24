/*
���������������ֵ�˳�����ĳ�������˵�������
��������ʽ��һ��������ݣ���һ��Ϊһ������N����ʾ������N����(N<=30)����������N����ÿ��һ������ (��������Сд��ĸ��ɣ��������ֳ���С��20)��
�������ʽ�����ֵ�˳�����е���Ա������ÿ������ռһ�С�
���������롿5
                    zhangsan
                    liyang
                    wangxiao
                    liqing
                    wuhui
�����������liqing
                    liyang
                    wangxiao
                    wuhui
                    zhangsan
������˵����ĳ����5����,����Ϊzhangsan��liyang��wangxiao��liqing��wuhui,  
                   ���ֵ������˳��Ϊ��liqing��liyang��wangxiao��wuhui��zhangsan��
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#define N 30
#define SIZE 20

void swap(const char **s1, const char **s2)
{
	const char *temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

void sort(const char **a, unsigned int n)
{
	unsigned int i = 0;
	for(; i < n; i++)
	{
		unsigned minIndex = i;
		unsigned int j = i + 1;
		for(; j < n; j++)
		{
			if(strcmp(a[minIndex], a[j]) > 0)
			{
				swap(a + minIndex, a + j);
			}
		}
	}
}

int main(int argc, char **argv)
{
	char s[N][SIZE];
	const char *index[N];
	unsigned int n = 0;
	scanf("%d", &n);
	unsigned int i = 0;
	for(; i < n; i++)
	{
		scanf("%s", s[i]);
		index[i] = s[i];
	}

	sort(index, n);

	for(i = 0; i < n; i++)
	{
		printf("%s\n", index[i]);
	}
	return 0;
}