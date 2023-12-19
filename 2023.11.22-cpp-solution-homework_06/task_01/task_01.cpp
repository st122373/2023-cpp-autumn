#include <iostream>

void hanoi(int n, int from, int to)
{
	if (n == 1)
	{
		std::cout << n << " " << from << " " << to << std::endl;
	}
	else
	{
		int temp = 6 - from - to;
		hanoi(n - 1, from, temp);
		std::cout << n << " " << from << " " << to << std::endl;
		hanoi(n - 1, temp, to);
	}
}

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	hanoi(n, 1, 3);

	return EXIT_SUCCESS;
}