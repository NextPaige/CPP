#include <iostream>
#include <stack>


int main()
{
	std::stack<int> stk;

	std::string converter("0123456789ABCDEF");
	std::string hexdecimal;
	int decimal;

	do
	{
		std::cout << "���� ������ �Է��ϼ���: ";
		std::cin >> decimal;
	} while (decimal <= 0);

	while (decimal != 0)
	{
		stk.push(converter[decimal % 16]);
		decimal = decimal / 16;
	}

	while (!stk.empty())
	{
		hexdecimal.push_back(stk.top());
		stk.pop();
	}

	std::cout << "16���� ��ȯ ��� : " << hexdecimal << std::endl;

}