/*
��������������һ����200�˵Ĵ�༶�У�����������������ͬ�ĸ��ʷǳ����ָ���ÿ��ѧ����ѧ�ţ��������գ����ҳ�����������ͬ��ѧ����
��������ʽ����һ��Ϊ����n����ʾ��n��ѧ����n<=200���˺�ÿ�а���һ���ַ����������������ֱ��ʾѧ����ѧ��(�ַ�������Ϊ11λ)�ͳ�����(1<=m<=12)��(1<=d<=31)��ѧ�š��¡���֮����һ���ո�ָ���
�������ʽ����ÿ��������ͬ��ѧ�������һ�У�����ǰ�������ֱ�ʾ�º��գ�������������ڵ��������ѧ����ѧ�ţ����֡�ѧ��֮�䶼��һ���ո�ָ��������е������Ҫ�����ڴ�ǰ�����˳���������������ͬ��ѧ�ţ��������˳�������
���������롿6
                   07101020105 3 15
                   07101020115 4 5
                   07101020118 3 15
                   07101020108 4 5
                   07101020111 4 5
                   07101020121 8 10
�����������3 15 07101020105 07101020118
                    4 5 07101020115 07101020108 07101020111

                    8 10 07101020121
������˵��������������ϡ�
*/ 

#include <stdio.h>
#include <string.h>

inline int earlier(unsigned int m1, unsigned int d1, unsigned int m2, unsigned int d2)
{
    return m1 < m2 || (m1 == m2 && d1 < d2); 
}

inline int same(unsigned int m1, unsigned int d1, unsigned int m2, unsigned int d2)
{
    return m1 == m2 && d1 == d2;
}

int main(int argc, char **argv)
{
    int days[200];
    int months[200];
    char id[200][12];
    unsigned int n = 0;
    scanf("%d", &n);
    unsigned int i = 0;
    for(;i < n; i++)
    {
        scanf("%s %d %d", id[i], months + i, days +i);
    }

    for(i = 0;i < n; i++)
    {
        unsigned int j = i;
        for(; j > 0; j--)
        {
            if(earlier(months[j], days[j], months[j - 1], days[j - 1]))
            {
                int temp = months[j];
                months[j] = months[j - 1];
                months[j - 1] = temp;

                temp = days[j];
                days[j] = days[j - 1];
                days[j - 1] = temp;

                char tempS[12];
                strcpy(tempS, id[j]);
                strcpy(id[j], id[j - 1]);
                strcpy(id[j - 1], tempS);
            }
        }
    }

    for(i = 0;i < n;)
    {
        printf("%d %d %s", months[i], days[i], id[i]);
        
        unsigned int j = i + 1;
        for(; j < n; j++)
        {
            if(same(months[j], days[j], months[j - 1], days[j - 1]))
            {
                printf(" %s",id[j]);
            }
            else
            {
                break;
            }
        }
        printf("\n");
        i = j;
    }
    return 0;
}