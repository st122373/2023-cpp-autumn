#include <iostream>
#include "ArrayJob.h"

void printArray(int* a, int len)
{
	if (a == nullptr)
	{
		std::cout << "EMPTY";
	}
	else
	{
		for (int i = 0; i < len; ++i)
		{
			std::cout << a[i] << " ";
		}
	}
	std::cout << std::endl;
}

void printMenu()
{
	std::cout << "0 - Exit" << std::endl;
	std::cout << "1 - Print array" << std::endl;
	std::cout << "2 - Append element to array" << std::endl;
	std::cout << "3 - Extract element from array" << std::endl;
	std::cout << "4 - Sort array " << std::endl;
	std::cout << "5 - Unwrap array " << std::endl;
	std::cout << "6 - Change max and min" << std::endl;
	std::cout << "7 - Delete all dublicats" << std::endl;
	std::cout << "8 - Add n random numbers" << std::endl;
}

void expandArray(int*& a, int& len)
{
	int* newA = new int[len + 1] { 0 };
	if (a != nullptr)
	{
		for (int i = 0; i < len; ++i)
		{
			newA[i] = a[i];
		}
		delete[] a;
	}
	a = newA;
	++len;
}
void addElement(int*& a, int& len, int element)
{
	expandArray(a, len);
	a[len - 1] = element;
}

bool indexValid(int index, int len)
{
	return (index >= 0 && index < len);
}
void contractArray(int*& a, int& len)
{
	if (a != nullptr)
	{
		int* newA = new int[len - 1];
		for (int i = 0; i < len - 1; ++i)
		{
			newA[i] = a[i];
		}
		delete[] a;
		a = newA;
		--len;
	}
}
int extractElement(int*& a, int& len, int index)
{
	int res = -1;
	if (indexValid(index, len))
	{
		res = a[index];
		for (int i = index; i < len - 1; ++i)
		{
			a[i] = a[i + 1];
		}
		contractArray(a, len);
	}
	return res;
}

void bubbleSort(int* a, int len) {
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			if (a[j] > a[j + 1]) {

				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}

void unwrapArray(int*& a, int& len)
{
	if (a == nullptr)
	{
		std::cout << "EMPTY" << std::endl;
	}
	else
	{
		for (int i = 0; i < (len / 2); ++i)
		{
			std::swap(a[i], a[len - i - 1]);
		}

	}
}


int searchMax(int* a, int& len)
{
	int max = a[0];
	for (int i = 0; i < len - 1; ++i)
	{
		if (a[i + 1] > max)
		{
			max = a[i + 1];
		}
	}
	for (int i = 0; i <= len; ++i)
	{
		if (a[i] == max)
		{
			max = i;
			break;
		}
	}
	return max;
}
int searchMin(int* a, int& len)
{
	int min = a[len - 1];
	for (int i = 0; i < len - 1; ++i)
	{
		if (a[i + 1] < min)
		{
			min = a[i + 1];
		}
	}
	for (int i = len - 1; i >= 0; ++i)
	{
		if (a[i] == min)
		{
			min = i;
			break;
		}
	}
	return min;
}
void changeMaxMin(int*& a, int& len)
{
	if (a == nullptr)
	{
		std::cout << "EMPTY" << std::endl;
	}
	else
	{
		std::swap(a[searchMax(a, len)], a[searchMin(a, len)]);
	}
}

void deleteElement(int*& a, int& len, int& num)
{
	if (a != nullptr)
	{
		int* newA = new int[len - 1];
		for (int i = 0; i < num; ++i)
		{
			newA[i] = a[i];
		}
		for (int j = num; j < len - 1; ++j)
		{
			newA[j] = a[j + 1];
		}
		delete[] a;
		a = newA;
		--len;
	}
	else
	{
		std::cout << "EMPTY" << std::endl;
	}
}
void deleteDuplicate(int*& a, int& len)
{
	if (a == nullptr)
	{
		std::cout << "EMPTY" << std::endl;
	}
	else
	{
		for (int i = 0; i < len - 1; ++i)
		{
			for (int j = i + 1; j < len; ++j)
			{
				if (a[i] == a[j])
				{
					deleteElement(a, len, j);
				}
			}
		}

	}
}

void addRandomElements(int*& a, int& len, int n)
{
	srand(time(0));
	for (int i = 0; i < n; ++i)
	{
		addElement(a, len, rand());
	}
}