#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> vec;

	vec.push_back(17);
	vec.push_back(10);
	vec.push_back(13);
	vec.push_back(18);
	vec.push_back(15);
	vec.push_back(11);

	std::sort(vec.begin(), vec.end());

	std::cout << "10 Å½»ö °á°ú = " << std::boolalpha;
	std::cout << std::binary_search(vec.begin(), vec.end(), 10) << std::endl;

	std::cout << "19 Å½»ö °á°ú = " << std::boolalpha;
	std::cout << std::binary_search(vec.begin(), vec.end(), 19) << std::endl;
}