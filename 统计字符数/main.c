/*�������������ж�һ����a-z ��26���ַ���ɵ��ַ������ĸ��ַ����ֵĴ�����ࡣ
��������ʽ����1���ǲ������ݵ�����n,ÿ���������ռ1�У���һ����a-z��26���ַ���ɵ��ַ�����ÿ�����ݲ�����
                        1000���ַ��ҷǿա�
�������ʽ�����n�У�ÿ�������Ӧһ�����롣һ������������ִ��������ַ��͸��ַ����ֵĴ������м���һ��
                        �ո�����ж���ַ����ֵĴ�����ͬ����࣬��ô���ASCII����С����һ���ַ���
���������롿2
           abbccc
           adfadffasdf
�����������c 3
            f 4
������˵��������������ϡ�*/

#include <stdio.h>

void cal_char(char *s)
{
    unsigned int hash[26];

    unsigned int i = 0;
    for(;i < 26; i++)
    {
        hash[i] = 0;
    }

   
    for(i = 0; s[i] != '\0'; i++)
    {
        hash[s[i] - 'a']++;
    }

    unsigned int max = 0;
    for(i = 0; i < 26; i++)
    {
        if(hash[i] > hash[max])
        {
            max = i;
        }
    }

    printf("%c %d\n", max + 'a', hash[max]);
}

int main(int argc, char **argv)
{

    unsigned int d = 0;
    scanf("%d", &d);
    char s[1001];
    for(; d > 0; d--)
    {
        scanf("%s", s);
        cal_char(s);
    }
    return 0;
}