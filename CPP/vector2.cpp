#include <iostream>
#include <vector>
#include <iomanip>

int main()
{

	int rows = 10;
	int cols = 10;

	std::vector<std::vector<int>> table(rows, std::vector<int>(cols));

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			table[i][j] = (i + 1) * (j + 1);
		}
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			std::cout << std::setw(4) << table[i][j] << " ";
		}
		std::cout << std::endl;
	}
}