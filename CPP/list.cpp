#include <iostream>
#include <list>

/*
	list Ŭ����(����Ʈ)�� ���� ���԰� ������ ������ ������ �����̳��Դϴ�. 
	����Ʈ�� ����� ���ϴ� ��ġ�� ��Ҹ� �����ϰ�, ������ �� �ֽ��ϴ�
	����Ʈ�� ���� ��ũ�� ����Ʈdoubly linked list�� �����Ǿ� �־, 
	�ε��� �Ǵ� at ��� �Լ��� Ư�� ��ҿ� �ٷ� ������ �� �����ϴ�. ����Ʈ�� ���ϴ� ��ҿ� �����Ϸ���, 
	�ݺ��ڸ� ����ؼ� ���ϴ� ��ұ��� �̵��� �� �����ؾ� �մϴ�. 
*/


int main()
{
	std::list<int> lst;
	int value;

	for (int i = 0; i < 5; i++)
	{
		std::cout << "������ �Է��ϼ���: ";
		std::cin >> value;
		lst.push_back(value);
	}
	std::cout << std::endl << std::endl;


	std::cout << "�⺻ ����" << std::endl;
	std::list<int>::iterator iter;

	for (iter = lst.begin(); iter != lst.end(); iter++)
	{
		std::cout << *iter << " ";
	}

	std::cout << std::endl << std::endl;


	std::cout << "�� ����" << std::endl;
	std::list<int>::reverse_iterator rIter;

	for (rIter = lst.rbegin(); rIter != lst.rend(); rIter++)
	{
		std::cout << *rIter << " ";
	}

}