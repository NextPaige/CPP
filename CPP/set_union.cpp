#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

void print(int value)
{
	std::cout << value << " ";
}


int main()
{

	std::set<int> first;
	first.insert(10);
	first.insert(19);
	first.insert(14);
	first.insert(17);
	first.insert(13);

	std::cout << "ù ��° ��Ʈ�� ���" << std::endl;
	std::for_each(first.begin(), first.end(), print);
	std::cout << std::endl;

	std::set<int> second;
	second.insert(16);
	second.insert(14);
	second.insert(13);
	second.insert(11);
	second.insert(20);

	std::cout << "�� ��° ��Ʈ�� ���" << std::endl;
	std::for_each(second.begin(), second.end(), print);
	std::cout << std::endl;

	// ������ ���ϰ� ���Ϳ� ����
	std::vector<int> temp(10);
	std::vector<int>::iterator iter;
	std::vector<int>::iterator endIter;

	endIter = std::set_union(first.begin(), first.end(), second.begin(), second.end(), temp.begin());

	// ���Ϳ��� ��� ��Ʈ�� ��� ����
	std::set<int> result;
	for (iter = temp.begin(); iter != endIter; iter++)
	{
		result.insert(*iter);
	}

	std::cout << "��� ��Ʈ�� ���" << std::endl;
	std::for_each(result.begin(), result.end(), print);
	std::cout << std::endl;


}