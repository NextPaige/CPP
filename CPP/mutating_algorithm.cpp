#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>


void print(int value)
{
	std::cout << value << " ";
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

	std::cout << "������ ����" << std::endl;
	std::reverse(vec.begin(), vec.end());
	std::for_each(vec.begin(), vec.end(), print);
	std::cout << std::endl << std::endl;

	std::cout << "ȸ���� ����" << std::endl;
	std::rotate(vec.begin(), vec.begin() + 2, vec.end());
	std::for_each(vec.begin(), vec.end(), print);
	std::cout << std::endl << std::endl;

	std::cout << "������ ����" << std::endl;
	std::random_shuffle(vec.begin(), vec.end());
	std::for_each(vec.begin(), vec.end(), print);
	std::cout << std::endl;

}