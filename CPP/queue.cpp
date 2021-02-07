#include <iostream>
#include <queue>

void print(std::queue<int> queue);

int main()
{
	std::queue<int> queue1, queue2, queue3, queue4, queue5;
	int num;
	int donation;

	srand(time(0));

	for (int i = 0; i < 50; i++)
	{
		num = rand();
		donation = num % (50 - 0 + 0) + 0;

		switch (donation / 10)
		{
		case 0:
			queue1.push(donation);
			break;
		case 1:
			queue2.push(donation);
			break;
		case 2:
			queue3.push(donation);
			break;
		case 3:
			queue4.push(donation);
			break;
		case 4:
			queue5.push(donation);
			break;
		}
	}


	std::cout << "기부 금액 범위 $00~09: ";
	print(queue1);
	std::cout << "기부 금액 범위 $10~19: ";
	print(queue2);
	std::cout << "기부 금액 범위 $20~29: ";
	print(queue3);
	std::cout << "기부 금액 범위 $30~39: ";
	print(queue4);
	std::cout << "기부 금액 범위 $40~49: ";
	print(queue5);


}

void print(std::queue<int> queue)
{
	while (!queue.empty())
	{
		std::cout << queue.front() << " ";
		queue.pop();
	}
	std::cout << std::endl << std::endl;
}
