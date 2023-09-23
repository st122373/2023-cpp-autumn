#include <iostream>

int main(int argc(), char* argv[]) {
	int n = 0;
	int c = 0;
	std::cin >> n;
	c = n % 10;
	if (n % 100 < 10 || n % 100 > 20) {
		if (c == 1) {
			std::cout << n << " bochka";
		}
		else if (c > 1 && c < 5) {
			std::cout << n << " bochki";
		}
		else {
			std::cout << n << " bochek";
		}
	}
	else {
		std::cout << n << " bochek";
	}
	return 0;
}