/*
�������������ں���void f(int n)�ж�̬����һ����СΪn��һά�������飬����ÿ������Ԫ�����θ�ֵΪ1��2��3��...��n�� ���������Ԫ�صĺͣ��˳�����ǰ�ͷŴ����顣��д�����������в��ԡ�
��������ʽ����������Ԫ�ظ���n��
�������ʽ������������Ԫ�صĺ͡�
���������롿5
�����������15

������˵����Ԫ�ظ���Ϊ5�����飬���ĸ�Ԫ�طֱ�Ϊ1��2��3��4��5����Ԫ��֮��Ϊ15.

�����ֱ�׼������15�֣���3�����Ե㣬ÿ�����Ե�5�֡�
�����˵�����������ʹ�ú���void f(int n)�����ں����ж�̬����һ����СΪn��һά�������飬����Ҫ��ĳ��򲻵÷֡�
*/

#include <iostream>
#include <iterator>

void f(int n)
{
	int *nums = new int[n];
	for(int i = 0; i < n; i++)
	{
		nums[i] = i + 1;
	}
	int total = 0;
	for(int i = 0; i < n; i++)
	{
		total += nums[i];
	}
	std::cout << total;
	delete[] nums;
}

int main(int argc, char **argv)
{
	std::istream_iterator<int> input_int(std::cin);
	f(*input_int);
	return 0;	
}