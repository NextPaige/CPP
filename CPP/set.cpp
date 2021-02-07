#include <iostream>
#include <set>
#include <iomanip>

/*
	세트는 키key라고 부르는 하나의 템플릿 자료형만 지정합니다.
	키는 오름차순으로만 정렬되며, 중복은 허용되지 않습니다.

	set<type> set1 // 빈 세트 생성
	set<type>(pos1, pos2) set2 // 다른 세트의 일부 요소를 기반으로 세트 생성
	set<type>(set2) set3 // 다른 세트의 요소를 기반으로 세트 생성
	set4 = set3 // 다른 세트의 요소를 기반으로 세트 생성

	set1.count(k) // k 값의 수를 리턴
	set1.find(k) // k의 위치를 가리키는 반복자를 리턴
	set1.lower_bound(k) // k를 삽입할 수 있는 첫 위치 리턴
	set1.upper_bound(k) // k를 삽입할 수 있는 마지막 위치 리턴
	set1.equal_range(k) // lower_bound와 upper_bound 쌍을 리턴

	세트는 요소를 삽입할 때 push 함수가 아니라, insert 함수를 사용합니다
	set1.insert(k) // k를 삽입하고 반복자와 성공 여부를 나타내는 <pos, bool> 리턴
	set1.insert(hint, k) // k를 삽입하고 힌트 뒤에 추가된 반복자를 리턴
	set1.insert(pos1, pos2) // 다른 세트에 있는 요소 여러 개 삽입

	세트는 요소를 제거할 때 pop 함수가 아니라 erase 함수를 사용합니다. erase 함수는 키와
	반복자를 사용해서 요소를 제거합니다
	set1.erase(k) // k를 제거하고 반복자와 성공 여부를 나타내는 <pos, bool> 리턴
	set1.erase(pos) // pos 위치의 요소를 제거
	set1.erase(first, last) // (first, last) 사이의 요소 제거
	set1.clear( ) // 모든 요소를 제거한 뒤 반복자 리턴
*/

int main()
{
	std::set<int> _set;

	_set.insert(47);
	_set.insert(18);
	_set.insert(12);
	_set.insert(24);
	_set.insert(69);
	_set.insert(35);
	_set.insert(85);
	_set.insert(77);
	_set.insert(93);
	_set.insert(6);


	std::cout << "오름차순으로 세트의 요소 출력하기" << std::endl;
	std::set<int>::iterator iter;
	for (iter = _set.begin(); iter != _set.end(); iter++)
	{
		std::cout << std::setw(4) << *iter << " ";
	}

	std::cout << std::endl << std::endl;


	std::cout << "내림차순으로 세트의 요소 출력하기" << std::endl;
	std::set<int>::reverse_iterator rIter;
	for (rIter = _set.rbegin(); rIter != _set.rend(); rIter++)
	{
		std::cout << std::setw(4) << *rIter << " ";
	}

	std::cout << std::endl << std::endl;



	std::set<int>::iterator iter1 = _set.find(93);
	std::cout << *iter1 << std::endl;


}