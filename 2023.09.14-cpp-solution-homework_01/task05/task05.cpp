#include <iostream>

int main(int argc, char* argv[]) {
	int v = 0;
	int t = 0;
	int a = 0;
	int s = 0;
	std::cin >> v;
	std::cin >> t;
	a = v * t % 109;
	s = (a + 109) % 109 + 1;
	std::cout << s;
	return 0;
}