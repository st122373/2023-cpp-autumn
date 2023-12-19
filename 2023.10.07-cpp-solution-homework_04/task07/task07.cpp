#include <iostream>

int main(int, char**)
{
	int n = 0;
	std::cin >> n;

	int* a = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; ++i)
	{
		std::cin >> *(a + i);
	}

	int l = 0;
	for (int i = 0; i < n; ++i)
	{
		if (*(a + i) > 0)
		{
			*(a + l) = *(a + i);
			++l;
		}
	}
	n = l;

	for (int i = 0; i < n; ++i)
	{
		std::cout << *(a + i) << " ";
	}

	free(a);

	return EXIT_SUCCESS;
}