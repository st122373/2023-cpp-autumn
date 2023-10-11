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
			std::cout << std::max(i, std::min(j, std::min(n - i - 1, n - j - 1))) + 1;
		}

		std::cout << std::endl;
	}

	return 0;
}
