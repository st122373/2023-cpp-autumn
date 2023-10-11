#include <iostream>

int main(int argc, char* argv[]) {
    int n = 0;
    std::cin >> n;

    int count = 0;
    while (n != 0) {
        count += n & 1;
        n >>= 1;
    }

    std::cout << count << std::endl;

    return 0;
}
