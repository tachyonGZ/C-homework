/*��������������һ���򣬶��ڸ�����һ���ٷ��Ƴɼ��������Ӧ�����ֵ�ɼ�����90������Ϊ'A'��80-89��Ϊ'B��70��79��Ϊ'C'��60-69��Ϊ'D��,60������Ϊ'E'(��switch���ʵ��)��������İٷ��Ƴɼ�����0-100֮�ڣ������error��

��������ʽ������һ�У�����һ���ٷ��Ƴɼ�����Χ��0-100��

�������ʽ�����һ�У���������ٷ��Ƴɼ���Ӧ�����ֵ�ɼ���

���������롿100

�����������A*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(int argc, char **argv)
{
	int score = 0;
	scanf("%d", &score);
	if(score > 100 || score < 0)
	{
		printf("error");
	}
	else
	{
		switch(score / 10)
		{
		case 10:
		case 9:
			printf("A");
			break;
		case 8:
			printf("B");
			break;
		case 7:
		case 6:
			printf("D");
			break;
		case 5:
		case 4:
		case 3:
		case 2:
		case 1:
		case 0:
			printf("E");
			break;
		default:
			printf("error");
			break;
		}
	}
	return 0;
}