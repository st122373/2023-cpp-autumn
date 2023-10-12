#include <iostream>

int main(int argc, char* argv[]) {
    int n = 0;
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        for (int j = 2*n - 1; j >= n; --j) 
        {
            std::cout << j - i << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
