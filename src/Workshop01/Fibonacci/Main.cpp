#include <iostream>
#include "Fibonacci.h"

int main()
{
	std::cout << "Hello World!\n";

	Fibonacci a;
	int result = a.Calculate(4);
	std::cout << result;
}
