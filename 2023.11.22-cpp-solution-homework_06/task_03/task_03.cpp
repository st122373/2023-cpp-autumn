#include <iostream>

void hanoi(int n, int from, int to)
{
	if (n == 0)
	{
		return;
	}
	int res = 6 - from - to;

	if ((3 + to - from) % 3 == 1)
	{
		hanoi(n - 1, from, res);
		std::cout << n << " " << from << " " << to << std::endl;
		hanoi(n - 1, res, to);
	}
	else
	{
		hanoi(n - 1, from, to);
		std::cout << n << " " << from << " " << res << std::endl;
		hanoi(n - 1, to, from);
		std::cout << n << " " << res << " " << to << std::endl;
		hanoi(n - 1, from, to);
	}

}

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	hanoi(n, 1, 3);

	return EXIT_SUCCESS;
}