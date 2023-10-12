#include <iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    std::cin >> n;

    for (int i = 0; i < n; ++i) 
    {
        for (int j = 0; j < n; ++j) 
        {
            std::cout << (i + j) % n + 1 << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

/*int main(int argc, char* argv[]) {
    int n = 0;
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) 
        {
            std::cout << j + 1 << " ";
        }
        for (int j = 1; j <= i; ++j) 
        {
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
*/
