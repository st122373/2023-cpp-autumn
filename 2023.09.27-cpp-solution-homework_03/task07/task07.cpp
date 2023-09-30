#include <iostream>

int main(int argc, char* argv[]) {
    int n;
    int k = 0;
    int m = 1;
    std::cin >> n;

    while (m < n) {
        k++;
        m = m*2;
    }

    std::cout << k;

    return 0;
}
