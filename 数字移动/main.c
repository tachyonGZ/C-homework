/*
��������

��n��������ʹǰ�����˳�������m��λ�ã����m�������ǰ��m��������ͼ��

дһ������ʵ�����Ϲ��ܣ���������������n����������������n��������ָ�뷽��ʵ�֡�

������ʽ

�������У���һ������n��m���ڶ�������n��������

�����ʽ

���һ�У�����������n������

��������

6 2

1 2 3 4 5 6

�������

5 6 1 2 3 4
*/
#include <stdio.h>

int main(int argc, char **argv)
{
	int nums[128];
	unsigned int n, m;
	scanf("%d %d", &n, &m);
	int *p = nums + m;
	unsigned int i = 0;
	for(;i < n - m; i++)
	{
		scanf("%d", p + i);
	}

	for(i = 0; i < m; i++)
	{
		scanf("%d", nums + i);
	}

	for(i = 0; i < n; i++)
	{
		printf(i == n - 1?"%d":"%d ", nums[i]);
	}

	return 0;
}