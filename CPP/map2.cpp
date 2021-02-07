#include <iostream>
#include <string>
#include <map>
#include <iomanip>

void ss()
{
	std::map<std::string, int> freq;
	std::map<std::string, int>::iterator iter;
	std::string word;

	std::cout << "문장을 입력하세요: " << std::endl;

	while (std::cin >> word)
	{
		freq[word]++;
	}

	for (iter = freq.begin(); iter != freq.end(); iter++)
	{
		std::cout << std::left << std::setw(10) << iter->first << iter->second << std::endl;
	}


}