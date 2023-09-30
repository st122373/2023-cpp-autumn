#include <iostream>

int main(int argc, char* argv[]) {
    int k = 0;
    int a = 0;
    std::cin >> k;

    

    for (int b = 1; b <= k; ++b) {
        int n = b;
        int f = 0;

        while (n > 0) {
            f = f * 10 + n % 10;
            n = n / 10;
        }

        if (b == f) {
            a++;
        }
    }

    std::cout << a << std::endl;

    return 0;
}
