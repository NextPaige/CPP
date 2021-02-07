#include <iostream>
#include <vector>
#include <iomanip>

/*
	vector Ŭ����(����)�� ���� ���� ������ �� �� ������,
	�����̳��� �ڿ� ���� ���԰� ������ Ư¡���� �ϴ� ������ �����̳��̴�.

	vector<T> vec; // �� ���͸� ����
	vector<T> vec(4, value); // value��� ���� ���� 4���� ��Ҹ� ���� ���͸� ����
	vector<T> vec(from, to); // �ٸ� ������ �����̳ʸ� ������� ���͸� ����
	vector<T> vec(otherVec); // ���� ������
	vector<T> vec = otherVec; // �Ҵ� ������

	vec.size( ); // ���� ũ�⸦ ����
	vec.max_size( ); // �ִ� ũ�⸦ ����
	vec.resize(n, value); // ������ ũ�⸦ ����
	vec.empty( ); // �� ���Ͷ�� true�� ����
	vec.capacity( ); // ������ ����
	vec.reserve(n); // �޸� ��ġ�� �߰� �Ҵ�

	vec.front( ); // ���� ���� ��ҿ� ����
	vec.back( ); // ���� �������� ��ҿ� ����
	vec[i]; // i ��° ��ҿ� ����
	vec.at(i); // i ��° ��ҿ� ����

	begin() �Լ��� ���� �տ� �����ϴ� ��Ҹ� ����Ű�� �ݺ��ڸ� ����
	end() �Լ��� ������ ��� ���� �������� �ʴ� ��Ҹ� ����Ű�� �ݺ��ڸ� ����
	rbegin() �Լ��� ���� �ڿ� �����ϴ� ��Ҹ� ����Ű�� �ݺ��ڸ� ����
	rend() �Լ��� ���� ���� �������� �ʴ� ��Ҹ� ����Ű�� �ݺ��ڸ� ����
*/

int main()
{
	// 10���� ��Ҹ� ���� ���Ϳ� �ݺ��� 2�� ����
	std::vector<int> vec(10);
	std::vector<int>::iterator iter;
	std::vector<int>::reverse_iterator rIter;


	for (int i = 0; i < 10; i++)
	{
		vec.at(i) = i * i;
	}


	std::cout << "�⺻ Ž��: ";
	for (iter = vec.begin(); iter < vec.end(); iter++)
	{
		std::cout << std::setw(4) << *iter;
	}
	std::cout << std::endl;

	std::cout << "�� Ž��: ";
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