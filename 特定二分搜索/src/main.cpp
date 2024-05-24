#include <iostream>
#include <optional>
#include <vector>

std::vector<uint32_t> g()
{
	size_t size;
	std::cin >> size;
	std::vector<uint32_t> vec(size);
	
	for (auto &v : vec)
	{
		std::cin >> v;
	}

	return vec;
}

template<typename IndexType, typename ValueType>
std::optional<IndexType> f(std::vector<ValueType> &&a, ValueType v)
{
	IndexType l = 0, h = a.size() - 1;
	while (l <= h)
	{
		IndexType mid = (l + h) / 2;
		if (a[mid] > v)
		{
			h = mid - 1;
			continue;	
		}
		
		if (a[mid] < v)
		{
			l = mid + 1;
			continue;
		}

		for (IndexType i = mid; i > 0; i --)
		{
			if (a[i - 1] != v)
			{
				return i;
			}
		}

		return 0;
	}

	return std::nullopt;
}

int main(int argc, char **argv)
{
	std::vector<uint32_t> vec = g();

	std::uint32_t v;
	std::cin >> v;

	std::optional<uint32_t> res = f<uint32_t, uint32_t>(std::move(vec), v);
	if (res == std::nullopt)
	{
		std::cout << -1;
	}
	else
	{
		std::cout << res.value();
	}
}