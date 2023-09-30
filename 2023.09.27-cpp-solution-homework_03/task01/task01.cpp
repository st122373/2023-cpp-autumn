#include <iostream>

int main(int argc, char* argv[])
{
    int k = 1;
    int n = 0;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < k && i < n; ++j) {
            ++i;
            std::cout << k << " ";
        }
        --i;
        ++k;
    }
    return 0;
}