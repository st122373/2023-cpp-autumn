#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;

	std::cin >> n;

	int a = n / 60;
	int b = (n % 60) / 20;
	int c = (n % 20) / 10;
	int d = (n % 10) / 5;
	int e = n % 5;

	if (e * 15 + d * 70 >= 125)
	{
		d = 0;
		e = 0;
		c++;
	}
	if (c * 125 + d * 70 + e * 15 >= 230)
	{
		c = 0;
		d = 0;
		e = 0;
		b++;
	}
	if (b * 230 + c * 125 + d * 70 + e * 15 >= 440)
	{
		c = 0;
		d = 0;
		e = 0;
		b = 0;
		a++;
	}

	std::cout << e << " " << d << " " << c << " " << b << " " << a << std::endl;

	return EXIT_SUCCESS;
}