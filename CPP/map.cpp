#include <iostream>
#include <iomanip>

#include <map>



void map()
{

	std::map<std::string, int> scores;
	std::map<std::string, int>::iterator iter;

	scores["John"] = 52;
	scores["George"] = 71;
	scores["Mary"] = 88;
	scores["Lucie"] = 98;
	scores["Robert"] = 77;

	std::cout << "학생의 이름과 점수" << std::endl;
	for (iter = scores.begin(); iter != scores.end(); iter++)
	{
		std::cout << std::setw(10) << std::left << iter->first << " ";
		std::cout << std::setw(4) << iter->second << std::endl;
	}
}

