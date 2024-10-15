#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 6.3/lab 6. 3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Testlab63
{
	TEST_CLASS(Testlab63)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int arr[] = { 1, 2, 3, 8, 5, 12 };
			int result = FindMaxEven(arr, 6);
			Assert::AreEqual(12, result);
		}
	};
}
