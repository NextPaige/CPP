#include <iostream>
#include <vector>
#include <iomanip>

/*
	vector 클래스(벡터)는 빠른 임의 접근을 할 수 있으며,
	컨테이너의 뒤에 빠른 삽입과 삭제를 특징으로 하는 시퀀스 컨테이너이다.

	vector<T> vec; // 빈 벡터를 생성
	vector<T> vec(4, value); // value라는 값을 갖는 4개의 요소를 가진 벡터를 생성
	vector<T> vec(from, to); // 다른 시퀀스 컨테이너를 기반으로 벡터를 생성
	vector<T> vec(otherVec); // 복사 생성자
	vector<T> vec = otherVec; // 할당 연산자

	vec.size( ); // 현재 크기를 리턴
	vec.max_size( ); // 최대 크기를 리턴
	vec.resize(n, value); // 벡터의 크기를 변경
	vec.empty( ); // 빈 벡터라면 true를 리턴
	vec.capacity( ); // 용적을 리턴
	vec.reserve(n); // 메모리 위치를 추가 할당

	vec.front( ); // 가장 앞의 요소에 접근
	vec.back( ); // 가장 마지막의 요소에 접근
	vec[i]; // i 번째 요소에 접근
	vec.at(i); // i 번째 요소에 접근

	begin() 함수는 가장 앞에 존재하는 요소를 가리키는 반복자를 리턴
	end() 함수는 마지막 요소 뒤의 존재하지 않는 요소를 가리키는 반복자를 리턴
	rbegin() 함수는 가장 뒤에 존재하는 요소를 가리키는 반복자를 리턴
	rend() 함수는 가장 앞의 존재하지 않는 요소를 가리키는 반복자를 리턴
*/

int main()
{
	// 10개의 요소를 가진 벡터와 반복자 2개 생성
	std::vector<int> vec(10);
	std::vector<int>::iterator iter;
	std::vector<int>::reverse_iterator rIter;


	for (int i = 0; i < 10; i++)
	{
		vec.at(i) = i * i;
	}


	std::cout << "기본 탐색: ";
	for (iter = vec.begin(); iter < vec.end(); iter++)
	{
		std::cout << std::setw(4) << *iter;
	}
	std::cout << std::endl;

	std::cout << "역 탐색: ";
	for (rIter = vec.rbegin(); rIter < vec.rend(); rIter++)
	{
		std::cout << std::setw(4) << *rIter;
	}
	std::cout << std::endl;


	iter = vec.begin();
	std::cout << *iter << std::endl;
	iter += 2;
	std::cout << *iter;

}