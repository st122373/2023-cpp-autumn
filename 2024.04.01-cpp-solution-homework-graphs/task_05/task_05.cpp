#include <iostream>
#include <cmath>

class CGraph
{
private:
	int _CountOfStage;

public:
	CGraph() { _CountOfStage = 0; }

	CGraph(int CountOfStage)
	{
		_CountOfStage = CountOfStage;
	}


	int countInStage(int stage)
	{
		return pow(2, stage - 1);
	}


	int searchRelative(int num1, int num2)
	{
		bool flag = true;
		int relative = 1;
		int firstElement = pow(2, _CountOfStage - 1);
		int count = countInStage(_CountOfStage);
		int left = 0;
		int right = 0;
		while (flag == true)
		{
			left = firstElement + (count / 2) - 1;
			right = left + 1;
			if (num1 <= left && num2 <= left)
			{
				relative = relative * 2;
				count = count / 2;
				continue;
			}
			if (num1 >= right && num2 >= right)
			{
				relative = relative * 2 + 1;
				firstElement = right;
				count = count / 2;
				continue;
			}
			if ((num1 >= right && num2 <= left) || (num1 <= left && num2 >= right))
			{
				flag = false;
			}
		}
		return relative;
	}
};

int main(int argc, char* argv[])
{
	int CountOfStage = 0;
	std::cin >> CountOfStage;
	CGraph Tree(CountOfStage);

	int num1 = 0;
	int num2 = 0;
	std::cin >> num1;
	std::cin >> num2;
	std::cout << Tree.searchRelative(num1, num2);

	return EXIT_SUCCESS;
}