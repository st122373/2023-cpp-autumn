#include <iostream>

int main(int argc, char* argv[]) {
    int n = 0;
    std::cin >> n;

    int x = 0;

    while (n > 0) {
        x = x * 10 + n % 10;
        n = n / 10;
    }
    std::cout << x;
    return 0;
}