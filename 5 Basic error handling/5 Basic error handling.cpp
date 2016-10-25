// 5 Basic error handling.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{

	int x;
	std::cout << "Please enter an integer.\n";
	std::cin >> x;
	if (!std::cin) {
		std::cout << "What was that?\n";
	}
	else{
		std::cout << "You entered " << x << ".\n";
	}
	system("PAUSE");
	return 0;
}

