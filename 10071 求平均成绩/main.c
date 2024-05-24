/*
������������ĳ����ĩ���Ժ�Ҫͳ�Ʊ���ĳ�ſγ̵�ƽ���ɼ�����߳ɼ�����ͳɼ�����������Ǳ����ʵ����һ���ܡ� һ���������������30�ˣ�Ҫ��ʵ������߳ɼ�����ͳɼ���ƽ���ɼ��Ĺ�����һ��count������ɣ����ò���������߳ɼ�����ͳɼ���ƽ���ɼ�����ʾ��count����������Ϊ��void count(int a[],int n,int *pmax,int *pmin,float *pave) ;
��������ʽ��һ��������ݣ���һ��Ϊһ������N����ʾ������N���ˣ�N<=30������������N����ÿ��һ����������ʾһ���˵ĳɼ���
�������ʽ�����һ�С����а������������ֱ��ǣ���߳ɼ�����ͳɼ���ƽ���ɼ����ɼ�֮���ɿո�ָ�������ƽ���ɼ�Ϊʵ��������ȷ��С�������λ��
���������롿5
                   90 
                   83
                   76
                   85
                   62
�����������90 62 79.20
������˵����ĳ����5��ѧ�������ǵĳɼ��ֱ���90��83��76��85��62���ð����߳ɼ�����ͳɼ���ƽ���ɼ��ֱ�Ϊ90��62�Լ�79.20��
�����ֱ�׼�����⹲2�����Ե㣬ÿ�����Ե�1�֣���2�֡�
*/
#include <stdio.h>

void count(unsigned int *a, unsigned int n, unsigned int *pMax, unsigned int *pMin, double *pAvg)
{
    unsigned indexMax = 0;
    unsigned indexMin = 0;
    unsigned int total = 0;
    unsigned int i = 0;
    for(; i < n; i++)
    {
        total += a[i];
        if(a[i] > a[indexMax])
        {
            indexMax = i;
        }

        if(a[i] < a[indexMin])
        {
            indexMin = i;
        }
    }
    if(pMax)
    {
        *pMax = a[indexMax];
    }
    if(pMin)
    {
        *pMin = a[indexMin];
    }
    if(pAvg)
    {
        *pAvg = (double)total / n;
    }
}

int main(int argc, char **argv)
{
	unsigned int n = 0;
    scanf("%d", &n);
    unsigned int a[128];
    unsigned int i = 0;
    for(; i < n; i++)
    {
        scanf("%d", a + i);
    }
    unsigned int max, min;
    double avg;
    count(a, n, &max, &min, &avg);
    printf("%d %d %.2f", max, min, avg);
    return 0;
}