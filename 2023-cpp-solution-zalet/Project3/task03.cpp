#include <iostream>

int main(int argc,char* argv[]) {
    int n = 0;
    int res = 0;

    std::cin >> n;

    while (n > 0) {
        res = res * 10 + n % 10;
        n = n / 10;
    }

    std::cout << res << std::endl;

    return 0;
}
