#include <iostream>

int main(int*, char**)
{
    int n = 0;
    std::cin >> n;
    int* a = (int*)malloc(sizeof(int) * n);

    for (int i = 0; i < n; ++i)
    {
        std::cin >> *(a + i);
    }

    for (int i = n - 1; i >= 0; --i)
    {
        std::cout << *(a + i) << " ";
    }

    free(a);

    return 0;
}
