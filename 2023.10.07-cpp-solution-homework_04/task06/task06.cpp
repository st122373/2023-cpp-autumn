#include<iostream>

int main(int argc, char**)
{
	int n = 0;
	std::cin >> n;
	int* a = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; ++i)
	{
		std::cin >> *(a + i);
	}

	int min = 0;
	int max = 0;

	for (int i = 0; i < n; ++i)
	{
		if (*(a + i) >= *(a + max))
		{
			max = i;
		}
		if (*(a + i) < *(a + min))
		{
			min = i;
		}
	}

	int b = *(a + min);
	*(a + min) = *(a + max);
	*(a + max) = b;

	for (int i = 0; i < n; ++i)
	{
		std::cout << *(a + i) << " ";
	}

	free(a);

	return 0;
}
