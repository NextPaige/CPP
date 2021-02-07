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
	// ��� �߰�
	vec.push_back(11);
	vec.push_back(14);
	vec.push_back(17);
	vec.push_back(23);
	vec.push_back(35);
	vec.push_back(52);


	std::cout << "���� ����" << std::endl;
	std::for_each(vec.begin(), vec.end(), print);
	std::cout << std::endl << std::endl;

	std::cout << "������������ ������ ����" << std::endl;
	std::sort(vec.begin(), vec.end());
	std::for_each(vec.begin(), vec.end(), print);
	std::cout << std::endl << std::endl;

	std::cout << "������������ ������ ����" << std::endl;
	std::sort(vec.begin(), vec.end(), std::greater<int>());
	std::for_each(vec.begin(), vec.end(), print);
	std::cout << std::endl;


}