#include <iostream>

int main(int argc, char* argv[]) {
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int x = 0;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	std::cin >> d;
	
	for (int x = 0; x <= 1000; x++) {
		if (a * x * x * x + b * x * x + c * x + d == 0) {
			std::cout << x << " ";
		}
		else {
			std::cout << std::endl;
		}
	}
	return 0;
}