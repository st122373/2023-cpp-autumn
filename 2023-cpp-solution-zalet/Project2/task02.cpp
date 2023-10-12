#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;

	for (int i = 0; i < n; ++i)
	{
		std::cout << i;
	}
	for (int i = n; i >= 0; --i) {
		std::cout << i;
	}
	std::cout << std::endl;

	return 0;
}
