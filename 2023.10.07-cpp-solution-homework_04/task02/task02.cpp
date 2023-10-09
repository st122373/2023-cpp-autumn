#include <iostream>

int main (int*, char**)
{
    int n = 0;
    std::cin >> n;
    int* a = (int*)malloc(sizeof(int) * n);

    for (int i = 0; i < n; ++i)
    {
        std::cin >> *(a + i);
    }

    for (int i = 1; i < n; i += 2)
    {
        std::cout << *(a + i) << " ";
    }

    free(a);

    return 0;
}
