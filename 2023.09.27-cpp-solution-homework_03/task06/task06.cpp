#include <iostream>


int main(int argc, char* argv[]) {

    int n = 0;
    std::cin >> n;

    if (n == 0) {
        std::cout << 0 << std::endl;
    }
    else {
        int a = 0;
        int b = 1;
        for (int i = 2; i <= n; ++i) {
            int temp = b;
            b = a + b;
            a = temp;
        }
        std::cout << b << std::endl;
    }
    return 0;
}
