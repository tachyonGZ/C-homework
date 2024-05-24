/*
���������������ú���ģ�壬ʵ�ֶ�n�����ݵ���С�������򡣴���Ҫ��ֱ�ʹ��5�����͡�3���ַ�����8��ʵ���������͵����ݽ��в��ԡ�
��������ʽ������ռ���С���һ����5�����ͣ���2����3���ַ�������3����8��ʵ�ͣ��˴��ÿո�����
�������ʽ��ռ3�У��ֱ�����С���������n�������˴��ÿո���������ʾ�����ⲻ�ù�ʵ����С����λ��������ʹ��cout����������ɡ������ص����ڣ�ѧ��ʹ�ú���ģ�塣��
���������롿5 4 3 2 1 

                        Tuesday Today Tomorrow

                        1.2 5.6 3.5 6.7 7.8 1.1 9.3 2.4

�����������1 2 3 4 5

                         Today Tomorrow Tuesday

                        1.1 1.2 2.4 3.5 5.6 6.7 7.8 9.3
�����ֱ�׼������15�֣���3�����Ե㣬ÿ�����Ե�5�֡�
�����˵�����������ʹ�ú���ģ�壬�Ǻ���ģ���̲��÷֡�
*/

#include <iostream>
#include <vector>
#include <string>
#include <iterator>

#define I_NUM 5
#define D_NUM 8

#define S_NUM 3

template<typename Iterator>
Iterator sort(Iterator first, Iterator last)
{
	for(Iterator i = first; i != last; i++)
	{
		Iterator min = i;
		for(Iterator j = i; j != last; j++)
		{
			if(*j < *min)
			{
				min = j;
			}
		}

		std::iter_swap(i, min);
	}

	return first;
}

int main(int argc, char **argv)
{
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

	std::copy(sort(veci.begin(), veci.end()), veci.end(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;
	std::copy(sort(vecs.begin(), vecs.end()), vecs.end(), std::ostream_iterator<std::string>(std::cout, " "));
	std::cout << std::endl;
	std::copy(sort(vecd.begin(), vecd.end()), vecd.end(), std::ostream_iterator<double>(std::cout, " "));
	
	
}