/*
�������������������غ���ʵ�ֶ����ɸ����������Сֵ������Ҫ��ʹ��ͬ�������ֱ�ʵ�֣��� ��2��ʵ������ ��3���ַ������� ��10����������Сֵ��
��������ʽ�������3�С���1��Ϊ2��ʵ������2��Ϊ3���ַ�������3��Ϊ10������������֮���ÿո�����

�������ʽ��ռһ�У���3�������ֱ���2��ʵ����3������10����������Сֵ������֮���Կո�����

���������롿20.3 18.02

                        Tuesday Today Tomorrow

                        3 5 7 1 2 4 8 9 10 6

�����������18.02 Today 1

�����ֱ�׼�����⹲15�֣�3�����Ե㣬ÿ�����Ե�5�֡�
�����˵�����������ʹ�ú������أ��Ǻ������ر�̲��÷֡�
*/#include <iostream>
#include <iterator>
#include <vector>

#define D_NUM 2
#define S_NUM 3
#define I_NUM 10

size_t find_min(const std::vector<double> &vec)
{
	size_t min_index = 0;
	for(size_t i = 1; i < vec.size(); i++)
	{
		if(vec[i] < vec[min_index])
		{
			min_index = i;
		}
	}

	return min_index; 
}

size_t find_min(const std::vector<std::string> &vec)
{
	size_t min_index = 0;
	for(size_t i = 1; i < vec.size(); i++)
	{
		if(vec[i] < vec[min_index])
		{
			min_index = i;
		}
	}

	return min_index; 
}

size_t find_min(const std::vector<int> &vec)
{
	size_t min_index = 0;
	for(size_t i = 1; i < vec.size(); i++)
	{
		if(vec[i] < vec[min_index])
		{
			min_index = i;
		}
	}

	return min_index; 
}

int main(int agrc, char **argv)
{
	std::vector<double> vecd(0);

	std::istream_iterator<double> input_double(std::cin);
	for(size_t n = 0; n < D_NUM; n++)
	{
		vecd.emplace_back(*input_double);
		if(D_NUM - 1!= n)
		{
			input_double++;
		}
	}

	std::vector<std::string> vecs(0);
	std::istream_iterator<std::string> input_string(std::cin);
	for(size_t n = 0; n < S_NUM; n++)
	{
		vecs.emplace_back(*input_string);
		if(S_NUM -1 != n)
		{
			input_string++;
		}
	}

	std::vector<int> veci(0);
	std::istream_iterator<int> input_int(std::cin);
	for(size_t n = 0; n < I_NUM; n++)
	{
		veci.emplace_back(*input_int);
		if(I_NUM -1 != n)
		{
			input_int++;
		}
	}

	

	std::cout << vecd[find_min(vecd)] << " " << vecs[find_min(vecs)] << " " << veci[find_min(veci)];
}