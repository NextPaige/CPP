#include <iostream>
#include <queue>

/*
	우선 순위 큐는 요소를 삽입했을 때, 어떤 순위에 따라서 요소를 꺼낼 수 있습니다.
	따라서 top 함수를 호출하면 가장 큰 요소부터 꺼내집니다.
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