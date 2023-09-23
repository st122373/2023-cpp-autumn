#include <iostream>

int main(int argc(), char* argv[]) {
	int a = 0;
	int s1 = 0;
	int s10 = 0;
	std::cin >> a;
	//There we set a new argument that is looking for: 
	s10 = a / 10; // tens
	s1 = a % 10; // units
	//There we are looking for tens
	if (s10 == 10) {
		std::cout << "C";
	}
	else if (s10 == 9) {
		std::cout << "XC";
	}
	else if (s10 == 4) {
		std::cout << "XL";
	}
	else if (s10 >= 5) {
		std::cout << "L";
	}
	if (s10 == 3 || s10 == 8) {
		std::cout << "XXX";
	}
	else if (s10 == 2 || s10 == 7) {
		std::cout << "XX";
	}
	else if (s10 == 1 || s10 == 6) {
		std::cout << "X";
	}
	// Theree we are looking for units
	if (s1 == 9) {
		std::cout << "IX";
	}
	else if (s1 == 4) {
		std::cout << "IV";
	}
	else if (s1 >= 5) {
		std::cout << "V";
	}
	if (s1 == 3 || s1 == 8) {
		std::cout << "III";
	}
	else if (s1 == 2 || s1 == 7) {
		std::cout << "II";
	}
	else if (s1 == 1 || s1 == 6) {
		std::cout << "I";
	}
	return 0;
}