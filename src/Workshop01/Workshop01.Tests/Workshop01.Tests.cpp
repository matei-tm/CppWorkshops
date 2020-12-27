#include "pch.h"
#include "CppUnitTest.h"
#include "../Fibonacci/Fibonacci.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Workshop01Tests
{
	TEST_CLASS(Workshop01Tests)
	{
	public:
		
		TEST_METHOD(TestClassInit)
		{
			Fibonacci a;
			int result = a.Calculate(4);

			Assert::AreEqual(result, 8);
		}
	};
}
