#include <iostream>
#include <fstream>
#include <queue>
#include <string>

int main()
{
	std::queue<std::pair<int, int>> q1;
	for (int i = 1; i <= 100; i++)
	{
		q1.push(std::pair<int, int>(i, 100-i));
	}
	for (;q1.size();)
	{
		std::cout << "first is " << q1.front().first <<" second is " << q1.front().second << "\n";
		q1.pop();
	}
	std::cin.get();
	return 0;
}

	//std::ifstream readFrom("newfile");
	//
	//int a, b, c;
	//int a1, b1;
	//readFrom >> a >> b >> c;
	//std::cout << a << " " << b << " " << c << "\n";
	//while (readFrom >> a1 >> b1)
	//{
	//	std::cout << a1 << " " << b1 << "\n";
	//}
	//readFrom.close();