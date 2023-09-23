#include <iostream>
//There is some magic that my mind refuse to understand. If I wrote like it is written, evrething works
//But if i set brckets like it is easer to readd for me, it doesnt work(
int main(int argc(), char* argv[]) {
	int k = 0;
	int m = 0;
	int n = 0;
	
	std::cin >> k;
	std::cin >> m;
	std::cin >> n;

	if ((2 * n) % k == 0) {
		std::cout << (2 * n  / k) * m; // For examle if k = 1 m = 5 n = 1
	}// I'll get that (2 * 1 / 1) - it is equal to 2 and then we multiplicate it to 5 and get an answer 10, which is correct
	// But if I write (2 * n * m)/ k - on the paper it is equal, but the site refuse to thake this as an answer
	else if (k >= n) {
		std::cout << 2 * m;
	}
	else {
		std::cout << (2 * n  / k) * m + m;
	}
	return 0;
}