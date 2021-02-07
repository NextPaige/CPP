#include <iostream>
#include <queue>

/*
	�켱 ���� ť�� ��Ҹ� �������� ��, � ������ ���� ��Ҹ� ���� �� �ֽ��ϴ�.
	���� top �Լ��� ȣ���ϸ� ���� ū ��Һ��� �������ϴ�.
*/

int main()
{
	std::priority_queue<int> line;

	line.push(4);
	line.push(7);
	line.push(2);
	line.push(6);
	line.push(1);
	line.push(5);
	line.push(9);

	while (!line.empty())
	{
		std::cout << line.top() << " ";
		line.pop();
	}
	std::cout << std::endl;
}