#include<iostream>
#include<cmath>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			std::cout << j;
		}
		std::cout << std::endl;
	}

	return EXIT_SUCCESS;
}