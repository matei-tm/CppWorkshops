#include "pch.h"
#include "CppUnitTest.h"
#include "../Fibonacci/Fibonacci.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Workshop01Tests
{
	TEST_CLASS(Workshop01Tests)
	{
	public:
		
		TEST_METHOD(FibonacciForZero)
		{
			Fibonacci fibonacciInstance;
			int result = fibonacciInstance.Calculate(0);

			Assert::AreEqual(result, 0);
		}

		TEST_METHOD(FibonacciForOne)
		{
			Fibonacci fibonacciInstance;
			int result = fibonacciInstance.Calculate(1);

			Assert::AreEqual(result, 1);
		}

		TEST_METHOD(FibonacciForSix)
		{
			Fibonacci fibonacciInstance;
			int result = fibonacciInstance.Calculate(6);

			Assert::AreEqual(result, 8);
		}
	};
}
