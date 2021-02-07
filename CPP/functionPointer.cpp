#include <iostream>
#include <vector>
#include <algorithm>

void print(int value)
{
	std::cout << value << std::endl;
}

void fun(int x, void (*f)(int))
{
	f(x);
}

void run()
{
	// 함수 포인터 사용
	fun(24, print);
	fun(88, print);

	// for_each를 사용해 함수 사용
	std::vector<int> vec;
	vec.push_back(24);
	vec.push_back(42);
	vec.push_back(73);

	std::for_each(vec.begin(), vec.end(), print);
}
