#include <iostream>

int main() {
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	std::cin >> d;

    if (a == 0 && b == 0) {
        std::cout << "INF" << std::endl;  
    }
    else if (a == 0 || (b * c == a * d && b != 0)) {
        std::cout << "NO" << std::endl; 
    }
    else {
        if (-b % a == 0) {
            int x = -b / a;
            std::cout << x << std::endl;  
        }
        else {
            std::cout << "NO" << std::endl;   
        }
    }

	return 0;
}