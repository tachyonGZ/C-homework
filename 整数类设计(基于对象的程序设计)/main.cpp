/*
���������������һ���������������в������࣬���а����������������ݳ�Ա�������Ա���������������������ֵ��ƽ��ֵ����С�����������������С��������˳�����������

            ��main()�У���24��36��12����������Ϊ�������ݣ�����һ���������г�Ա������

��������ʽ��ͨ���������������������ֱ��ǣ�24��36��12�������Կո��������ע�⣺ͨ����Ա������������������

�������ʽ�����3������ռ3�У�����Ϊ36��24��12 24 36��

���������롿24 36 12

�����������

36

24

12 24 36

������˵������������ 24��36��12�У����ֵΪ36,��ƽ��ֵΪ24������С�������е�˳��Ϊ��12��24��36��

�����ֱ�׼��4�����Ե㣬��20�֡�ÿ�����Ե�5�֡�

�����˵�����������ʹ���࣬��main()�����д�������ͨ�����ú��������������������㲢���������ǻ��ڶ���ĳ��򲻵÷֡�
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

class COperation;

inline std::ostream &operator<<(std::ostream &out, const COperation &op);

class COperation
{
friend std::ostream &operator<<(std::ostream &out, const COperation &op);

private:
	std::vector<int> nums;

public:
	using value_type = int;
	using container_type = std::vector<int>;
public:
	COperation(std::vector<int> &&vec)
		: nums(vec)
	{
		this -> sort();
	}

	const double get_average()
	{
		value_type total = 0;
		for(value_type i : nums)
		{
			total += i;
		}
		return (double)total / nums.size();
	}

	const int get_max()
	{
		return nums.back(); 
	}

	COperation &sort()
	{
		std::sort(nums.begin(), nums.end());
		return *this;
	}
};

std::ostream &operator<<(std::ostream &out, const COperation &op)
{
	std::copy(op.nums.cbegin(), op.nums.cend(), std::ostream_iterator<COperation::value_type>(out, " "));
	return out;
}


int main(int argc, char **argv)
{
	std::vector<int> vec(0);
	std::istream_iterator<int> input_int(std::cin);
	for(size_t i = 0; i < 3; i++)
	{
		vec.emplace_back(*input_int);
		if(i != 2) input_int++;
	}
	COperation op(std::move(vec));
	std::cout << op.get_max() << std::endl <<  op.get_average() << std::endl << op << std::endl;
	return 0;	
}