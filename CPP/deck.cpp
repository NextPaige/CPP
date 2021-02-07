#include <iostream>
#include <string>
#include <deque>
#include <iomanip>


void print(std::deque<std::string> deq)
{
	for (int i = 0; i < deq.size(); i++)
	{
		std::cout << deq.at(i) << " ";
	}
	std::cout << std::endl;
}

int main()
{
	std::deque<std::string> deq(7);
	std::string arr[5] = { "John", "Mary", "Rich", "Mark", "Tara" };

	for (int i = 0; i < 5; i++)
	{
		deq[i] = arr[i];
	}
	print(deq);


	deq.push_back(deq.front());
	deq.pop_front();
	print(deq);

	deq.push_front(deq.back());
	deq.pop_back();
	print(deq);
}