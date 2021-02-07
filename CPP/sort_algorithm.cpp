#include <iostream>
#include <algorithm>
#include <vector>

void print(int value)
{
	std::cout << value << std::endl;
}

int main()
{
	std::vector<int> vec;
	// 요소 추가
	vec.push_back(11);
	vec.push_back(14);
	vec.push_back(17);
	vec.push_back(23);
	vec.push_back(35);
	vec.push_back(52);


	std::cout << "원본 벡터" << std::endl;
	std::for_each(vec.begin(), vec.end(), print);
	std::cout << std::endl << std::endl;

	std::cout << "오름차순으로 정렬한 벡터" << std::endl;
	std::sort(vec.begin(), vec.end());
	std::for_each(vec.begin(), vec.end(), print);
	std::cout << std::endl << std::endl;

	std::cout << "내림차순으로 정렬한 벡터" << std::endl;
	std::sort(vec.begin(), vec.end(), std::greater<int>());
	std::for_each(vec.begin(), vec.end(), print);
	std::cout << std::endl;


}