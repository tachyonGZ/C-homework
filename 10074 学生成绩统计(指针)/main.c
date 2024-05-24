/*
������������ĳ����N(N<=30)��ѧ����������5�ſγ̣��ֱ�����������ʵ�����¹��ܣ�

                    ��1�����һ�ſγ̵�ƽ���֣�
                    ��2���ҳ���2�ż�2�����ϲ������ѧ�����������ѧ�ţ�
                    ��3���ҳ�ƽ���ɼ���90�����ϵ�ѧ����������ǵ�ѧ�š�
��������ʽ����һ��Ϊһ������N����ʾ���๲N���ˣ���������N����ÿ�а���һ��ѧ������Ϣ������ѧ��(����С��10���ַ���)���γ�1�ɼ����γ�2�ɼ����γ�3�ɼ����γ�4�ɼ����γ�5�ɼ����ɼ���Ϊ������
�������ʽ����������У�

 ��һ��Ϊ�����һ�ſγ̵�ƽ���ɼ���(����С�������λ)

 �ڶ���Ϊ��2�ż�2�����ϲ������ѧ����ѧ�ţ���ѧ��֮����һ���ո�ָ����������ڣ����ӡ"no"��

 ������Ϊƽ���ɼ���90�ּ����ϵ�ѧ����ѧ��, ��ѧ��֮����һ���ո�ָ����������ڣ����ӡ"no"��
���������롿3
                        070001 90 80 85 50 42
                        070002 93 95 90 88 92
                        070003 98 92 84 90 91
�����������93.67
                        070001
                        070002 070003
������˵����������3��ѧ����

  ��1��ѧ��ѧ��Ϊ: 070001, 5�ſγ̵ĳɼ��ֱ�Ϊ: 90��80��85��50��42;

  ��2��ѧ��ѧ��Ϊ: 070002, 5�ſγ̵ĳɼ��ֱ�Ϊ: 93��95��90��88��92;

  ��3��ѧ��ѧ��Ϊ: 070003, 5�ſγ̵ĳɼ��ֱ�Ϊ: 98��92��84��90��91��

  �����1�ſγ̵�ƽ���ɼ�Ϊ: 93.67; ��2�ż�2�����ϲ������ѧ����ѧ��Ϊ: 070001; ƽ���ɼ���90�����ϵ�ѧ����ѧ��Ϊ: 070002��070003��
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define N 30
#define N2 5

struct Stu{
	char id[32];
	unsigned int sco[5];
};

double fun1(const struct Stu *stu, unsigned int n)
{
	unsigned int sum = 0;
	unsigned int i = 0;
	for(; i < n; i++)
	{
		sum += stu[i].sco[0];
	}
	return (double)sum / n;
}

void fun2(const struct Stu *stu, unsigned int n)
{
	unsigned int total = 0;
	unsigned int i = 0;
	for(; i < n; i++)
	{
		unsigned int j = 0;
		unsigned int count = 0;
		for(; j < N2; j++)
		{
			if(stu[i].sco[j] < 60)
			{
				count ++;
			}

			if(2 == count)
			{
				total ++;
				printf("%s ", stu[i].id);
				break;
			}
		}
	}

	if(0 == total)
	{
		printf("no");
	}

	printf("\n");
}

void fun3(const struct Stu *stu, unsigned int n)
{
	unsigned int total = 0;
	unsigned int i = 0;
	for(; i < n; i++)
	{
		unsigned int j = 0;
		unsigned int sum = 0;
		for(; j < N2; j++)
		{
			sum += stu[i].sco[j];
		}

		if(sum >= 450)
		{
			total++;
			printf("%s ", stu[i].id);
		}
	}

	if(0 == total)
	{
		printf("no");
	}

	printf("\n");
}

int main(int agrc, char **argv)
{
	struct Stu stu[N];
	unsigned int n = 0;
	scanf("%d", &n);
	
	unsigned int i = 0;
	for(; i < n; i++)
	{
		scanf("%s", stu[i].id);
		unsigned int j = 0;
		for(; j < N2; j++)
		{
			scanf("%d", stu[i].sco + j);
		}
	}

	printf("%.2f\n", fun1(stu, n));
	fun2(stu, n);
	fun3(stu, n);
	return 0;
}