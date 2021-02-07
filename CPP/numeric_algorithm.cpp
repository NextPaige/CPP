#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>


void print(int value)
{
	std::cout << value << " ";
}

int main()
{

	std::vector<int> vec;

	vec.push_back(17);
	vec.push_back(10);
	vec.push_back(13);
	vec.push_back(13);
	vec.push_back(18);
	vec.push_back(15);
	vec.push_back(17);

	std::for_each(vec.begin(), vec.end(), print);
	std::cout << std::endl;

	int sum = std::accumulate(vec.begin(), vec.end(), 0);
	std::cout << "гу╟Х = " << sum;


}