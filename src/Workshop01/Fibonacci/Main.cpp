#include <iostream>
#include "Fibonacci.h"

int main()
{
	std::cout << "Hello World!\n";

	Fibonacci a;
	try
	{
		int result = a.CalculateRecursive(-1);
	}
	catch (const std::exception&)
	{
		std::cout << "Negative not allowed!\n";
	}
	
	int result = a.CalculateRecursive(8);
	std::cout << result;
}
