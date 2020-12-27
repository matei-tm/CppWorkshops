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
			int result = fibonacciInstance.CalculateRecursive(0);

			Assert::AreEqual(result, 0);
		}

		TEST_METHOD(FibonacciForOne)
		{
			Fibonacci fibonacciInstance;
			int result = fibonacciInstance.CalculateRecursive(1);

			Assert::AreEqual(result, 1);
		}

		TEST_METHOD(FibonacciForSix)
		{
			Fibonacci fibonacciInstance;
			int result = fibonacciInstance.CalculateRecursive(6);

			Assert::AreEqual(result, 8);
		}

		TEST_METHOD(FibonacciForSeven)
		{
			Fibonacci fibonacciInstance;
			int result = fibonacciInstance.CalculateRecursive(7);

			Assert::AreEqual(result, 13);
		}

		TEST_METHOD(FibonacciRecursiveForNegatives)
		{

			auto func = [] {
				Fibonacci fibonacciInstance; 
				fibonacciInstance.CalculateRecursive(-1); 
			};

			Assert::ExpectException<std::invalid_argument>(func);
		}

		TEST_METHOD(FibonacciRecursiveForLarger)
		{
			auto func = [] {
				Fibonacci fibonacciInstance;
				fibonacciInstance.CalculateRecursive(40);
			};

			Assert::ExpectException<std::invalid_argument>(func);
		}
	};
}
