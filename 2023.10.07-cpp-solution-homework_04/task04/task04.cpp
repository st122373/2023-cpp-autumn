#include<iostream>

int main(int, char**)
{
	int n = 0;
	std::cin >> n;
	int* a = (int*)malloc(sizeof(int) * n);
	int b = 0;

	for (int i = 0; i < n; ++i)
	{
		std::cin >> *(a + i);
		if (*(a + i) > 0)
		{
			b++;
		}
	}

	std::cout << b;

	return 0;
}
