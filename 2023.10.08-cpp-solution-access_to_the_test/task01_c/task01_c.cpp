#include<iostream>
/*

int main(int argc, char* argv[])
{
	const int BITS = sizeof(unsigned int) * 8;
	
	{
		unsigned int a = 4561;
		std::cin >> a;
		unsigned int b = 8946;
		std::cin >> b;
		unsigned int c = 0;

		bool up = 0;
		for (int i = 0; i < BITS; ++i)
		{
			bool bitA = ((a >> i) & 1);
			bool bitB = ((b >> i) & 1);
			bool current = bitA ^ bitB ^ up;
		
			up = (bitA & bitB) | (bitA & up) | (bitB & up);
			c = c | ((int)current << i);
		}
		std::cout << a << " + " << b << " = " << c << std::endl;
	}

	return 0;
}
*/
int main()
{
	unsigned short a = 0;
	std::cin >> a;

	unsigned short b = 0;
	std::cin >> b;

	unsigned int c = a & b;
	unsigned int res = a ^ b;

	while (c != 0)
	{
		unsigned int d = c << 1;
		c = res & d;
		res ^= d;
	}

	std::cout << res << std::endl; 
	const int BITS = 32;
	for (int i = 31; i >= 0; --i)
	{
		std::cout << ((res >> i) & 1) << (i % 4 == 0 ? " " : "");
	}

	return 0;
}