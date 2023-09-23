#include <iostream>

int main(int argc, char* argv[]) {
	int n = 0;
	int a = 0;
	int b = 0;
	std::cin >> n;
	a = abs(n+1) / (n+1);
	b = 1 + a * (n - 1);
	std::cout << (1 + n) * b / 2;
	return 0;
}
