#include <iostream>
#include <cmath>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			std::cout << (i + 1) % 2 * (j + 1) + i % 2 * (n - j) << " ";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;

	return 0;
}

