#include <iostream>

int main(int argc, char* argv[]) {
    int x = 0;
    std::cin >> x;

    int count = 0; 
    int i = 1;
    for (i; i*i < x; i++) {
        if (x % i == 0) {
            count += 2;
        }
    }
    if (x == i*i){
        count++;
    }

    std::cout << count;

    return 0;
}