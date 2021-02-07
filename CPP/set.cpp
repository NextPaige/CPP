#include <iostream>
#include <set>
#include <iomanip>

/*
	��Ʈ�� Űkey��� �θ��� �ϳ��� ���ø� �ڷ����� �����մϴ�.
	Ű�� �����������θ� ���ĵǸ�, �ߺ��� ������ �ʽ��ϴ�.

	set<type> set1 // �� ��Ʈ ����
	set<type>(pos1, pos2) set2 // �ٸ� ��Ʈ�� �Ϻ� ��Ҹ� ������� ��Ʈ ����
	set<type>(set2) set3 // �ٸ� ��Ʈ�� ��Ҹ� ������� ��Ʈ ����
	set4 = set3 // �ٸ� ��Ʈ�� ��Ҹ� ������� ��Ʈ ����

	set1.count(k) // k ���� ���� ����
	set1.find(k) // k�� ��ġ�� ����Ű�� �ݺ��ڸ� ����
	set1.lower_bound(k) // k�� ������ �� �ִ� ù ��ġ ����
	set1.upper_bound(k) // k�� ������ �� �ִ� ������ ��ġ ����
	set1.equal_range(k) // lower_bound�� upper_bound ���� ����

	��Ʈ�� ��Ҹ� ������ �� push �Լ��� �ƴ϶�, insert �Լ��� ����մϴ�
	set1.insert(k) // k�� �����ϰ� �ݺ��ڿ� ���� ���θ� ��Ÿ���� <pos, bool> ����
	set1.insert(hint, k) // k�� �����ϰ� ��Ʈ �ڿ� �߰��� �ݺ��ڸ� ����
	set1.insert(pos1, pos2) // �ٸ� ��Ʈ�� �ִ� ��� ���� �� ����

	��Ʈ�� ��Ҹ� ������ �� pop �Լ��� �ƴ϶� erase �Լ��� ����մϴ�. erase �Լ��� Ű��
	�ݺ��ڸ� ����ؼ� ��Ҹ� �����մϴ�
	set1.erase(k) // k�� �����ϰ� �ݺ��ڿ� ���� ���θ� ��Ÿ���� <pos, bool> ����
	set1.erase(pos) // pos ��ġ�� ��Ҹ� ����
	set1.erase(first, last) // (first, last) ������ ��� ����
	set1.clear( ) // ��� ��Ҹ� ������ �� �ݺ��� ����
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


	std::cout << "������������ ��Ʈ�� ��� ����ϱ�" << std::endl;
	std::set<int>::iterator iter;
	for (iter = _set.begin(); iter != _set.end(); iter++)
	{
		std::cout << std::setw(4) << *iter << " ";
	}

	std::cout << std::endl << std::endl;


	std::cout << "������������ ��Ʈ�� ��� ����ϱ�" << std::endl;
	std::set<int>::reverse_iterator rIter;
	for (rIter = _set.rbegin(); rIter != _set.rend(); rIter++)
	{
		std::cout << std::setw(4) << *rIter << " ";
	}

	std::cout << std::endl << std::endl;



	std::set<int>::iterator iter1 = _set.find(93);
	std::cout << *iter1 << std::endl;


}