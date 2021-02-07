#include <iostream>
#include <list>

/*
	list 클래스(리스트)는 빠른 삽입과 삭제가 가능한 시퀀스 컨테이너입니다. 
	리스트는 목록의 원하는 위치에 요소를 삽입하고, 삭제할 수 있습니다
	리스트는 이중 링크드 리스트doubly linked list로 구현되어 있어서, 
	인덱스 또는 at 멤버 함수로 특정 요소에 바로 접근할 수 없습니다. 리스트의 원하는 요소에 접근하려면, 
	반복자를 사용해서 원하는 요소까지 이동한 뒤 접근해야 합니다. 
*/


int main()
{
	std::list<int> lst;
	int value;

	for (int i = 0; i < 5; i++)
	{
		std::cout << "정수를 입력하세요: ";
		std::cin >> value;
		lst.push_back(value);
	}
	std::cout << std::endl << std::endl;


	std::cout << "기본 방향" << std::endl;
	std::list<int>::iterator iter;

	for (iter = lst.begin(); iter != lst.end(); iter++)
	{
		std::cout << *iter << " ";
	}

	std::cout << std::endl << std::endl;


	std::cout << "역 방향" << std::endl;
	std::list<int>::reverse_iterator rIter;

	for (rIter = lst.rbegin(); rIter != lst.rend(); rIter++)
	{
		std::cout << *rIter << " ";
	}

}