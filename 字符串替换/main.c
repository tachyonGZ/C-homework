/*
��������������һ��Ӣ���������ַ����ø������ַ����滻��
��������ʽ������������У�ÿһ��Ϊһ��Ӣ�����£����Ȳ�����80�����Ժ�ÿ�а���2���ַ��������Ȳ�����20����֮���ɿո�ָ�����һ����Ϊԭ�����ڶ�����Ϊ�滻����������0 0������ʱ��ʾ������������Ҵ��в��账��ע�⣺������Ҫ����ԭ�����滻���ĳ��Ȳ�ͬ��������������1��ԭ���ĳ��ȴ����滻������ԭ��Ϊare ���滻��Ϊis�����2��ԭ���ĳ��ȵ����滻������ԭ��Ϊh ���滻��ΪH�����3��ԭ���ĳ���С�滻������ԭ��Ϊyes ���滻��Ϊyour��
�������ʽ������滻������¡�
���������롿hello how are yes.
h H
es ou
0 0
�����������Hello How are you.
*/
#include <stdio.h>
#include <string.h>

int is_end(char *s)
{
    return s[0] == '0' && strlen(s) == 1;
}

void exchange(char *sText, char *sYuan, char *sTiHuan)
{
    unsigned long long textSize = strlen(sText);
    unsigned long long yuanSize = strlen(sYuan);
    unsigned long long tiHuanSize = strlen(sTiHuan);
    unsigned long long i = 0;
    for(; sText[i] != '\0'; i++)
    {
        if(!strncmp(sText + i, sYuan, yuanSize))
        {
            // ƥ��ɹ�
            if(yuanSize == tiHuanSize)
            {
                ;
            }
            else if(yuanSize < tiHuanSize)
            {
                // ����
                const unsigned long long d = tiHuanSize - yuanSize;
                unsigned long long k = textSize;
                for(; k != i + yuanSize; k--)
                {
                    sText[k + d] = sText[k];
                }

                textSize += d;
            }
            else if(yuanSize > tiHuanSize)
            {
                // ǰ��
                const unsigned long long d = yuanSize - tiHuanSize;
                unsigned long long k = i + yuanSize;
                for(; k <= textSize; k++)
                {
                    sText[k - d] = sText[k];
                }

                textSize -= d;
            }

            strncpy(sText + i, sTiHuan, tiHuanSize);
        }
    }
}

int main(int argc, char **argv)
{
    char sText[1024];
    //gets(sText);
    scanf("%[^\n]%*c", sText);

    char sYuan[256];
    char sTiHuan[256];
    while(1)
    {
        scanf("%s %s", sYuan, sTiHuan);

        if(is_end(sYuan) && is_end(sTiHuan))
        {
            break;
        }
        exchange(sText, sYuan, sTiHuan);
    }

    puts(sText);
    return 0;
}