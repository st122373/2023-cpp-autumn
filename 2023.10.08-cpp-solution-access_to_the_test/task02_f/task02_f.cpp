#include<iostream>
#include<cmath>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			int distance = std::min(i, std::min(j, std::min(n - i - 1, n - j - 1)));
			std::cout << distance + 1;
		}

		std::cout << std::endl;
	}

	return 0;
}
