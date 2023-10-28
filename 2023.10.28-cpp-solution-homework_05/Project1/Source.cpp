#include <iostream>
#include"ArrayJob.h"


int main(int argc, char* argv[])
{
	int* a = nullptr;
	int len = 0;
	bool exit = false;
	while (!exit)
	{
		system("cls");
		printMenu();
		printArray(a, len);

		int choice = 0;
		std::cout << "Enter the command: ";
		std::cin >> choice;


		switch (choice)
		{
		case 0:
		{
			exit = true;
			break;
		}
		case 1:
		{
			printArray(a, len);
			system("pause");
			break;
		}
		case 2:
		{
			int element = 0;
			std::cout << "Input element to add : ";
			std::cin >> element;
			addElement(a, len, element);
			break;
		}
		case 3:
		{
			int index = 0;
			std::cout << "Input index to extract : ";
			std::cin >> index;
			std::cout << "Extracted  " << extractElement(a, len, index) << std::endl;
			break;
		}
		case 4:
		{
			bubbleSort(a, len);
			break;
		}
		case 5:
		{
			unwrapArray(a, len);
			break;
		}
		case 6:
		{
			changeMaxMin(a, len);
			break;
		}
		case 7:
		{
			deleteDuplicate(a, len);
			break;
		}
		case 8:
		{
			int n = 0;
			std::cin >> n;
			std::cout << "How many house can I make?";
			addRandomElements(a, len, n);
			break;
		}
		default:
		{
			std::cout << "Unknown command" << std::endl;
			break;
		}

		}
	}
	
	delete[] a;

	return EXIT_SUCCESS;
}
