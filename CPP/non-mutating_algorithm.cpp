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

	std::cout << "���� ������ ��" << std::endl;
	std::for_each(vec.begin(), vec.end(), print);
	std::cout << std::endl;

	std::cout << "���� ���ο� �ִ� 10�� ���� = ";
	std::cout << std::count(vec.begin(), vec.end(), 10);
	std::cout << std::endl << std::endl;

	std::cout << "���� ���ο� �ִ� ¦���� ���� = ";
	std::cout << std::count_if(vec.begin(), vec.end(), isEven);
	std::cout << std::endl << std::endl;

	std::cout << "���� ������ ��ҿ� 2 ���ϱ�" << std::endl;
	std::for_each(vec.begin(), vec.end(), timesTwo);
	std::for_each(vec.begin(), vec.end(), print);

}