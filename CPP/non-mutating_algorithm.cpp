#include <iostream>
#include <vector>
#include <algorithm>

bool isEven(int value)
{
	return (value % 2 == 0);
}

void timesTwo(int& value)
{
	value = value * 2;
}

void print(int value)
{
	std::cout << value << " ";
}

void qq()
{
	std::vector<int> vec;

	vec.push_back(17);
	vec.push_back(10);
	vec.push_back(13);
	vec.push_back(13);
	vec.push_back(17);
	vec.push_back(15);
	vec.push_back(17);
	vec.push_back(10);
	vec.push_back(13);
	vec.push_back(18);

	std::cout << "원본 벡터의 값" << std::endl;
	std::for_each(vec.begin(), vec.end(), print);
	std::cout << std::endl;

	std::cout << "벡터 내부에 있는 10의 개수 = ";
	std::cout << std::count(vec.begin(), vec.end(), 10);
	std::cout << std::endl << std::endl;

	std::cout << "벡터 내부에 있는 짝수의 개수 = ";
	std::cout << std::count_if(vec.begin(), vec.end(), isEven);
	std::cout << std::endl << std::endl;

	std::cout << "벡터 내부의 요소에 2 곱하기" << std::endl;
	std::for_each(vec.begin(), vec.end(), timesTwo);
	std::for_each(vec.begin(), vec.end(), print);

}