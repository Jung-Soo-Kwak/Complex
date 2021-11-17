#include "pch.h"
#include "CppUnitTest.h"
#include "../Project1/Complex.h"

bool operator == (struct Complex c1, struct Complex c2)
{
	return c1.real == c2.real && c2.imanagine == c2.imanagine;
}

std::wstring ToString(struct Complex c)
{
	return std::to_wstring(c.real) + std::wstring(L" + ") + 
		std::to_wstring(c.imanagine) + std::to_wstring(c.imanagine) + std::wstring(L"i");
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(Complex_plus)
		{
			Complex c1, c2, result;
			c1.real = 1;
			c1.imanagine = 3;

			c2.real = 4;
			c2.imanagine = 6;

			result = Complex_plus(c1, c2);
			compare.real = 5;
			compare.imanagine = 7;
			Assert::AreEqual(result, compare);

			c1.real = 1;
			c1.imanagine = 3;

			c2.real = 4;
			c2.imanagine = 6;

			result = Complex_plus(c1, c2);
			compare.real = 5;
			compare.imanagine = 7;
			Assert::AreEqual(result, compare);

			c1.real = 1;
			c1.imanagine = 3;

			c2.real = 4;
			c2.imanagine = 6;

			result = Complex_minus(c1, c2);
			compare.real = 5;
			compare.imanagine = 7;
			Assert::AreEqual(result, compare);

			c1.real = 1;
			c1.imanagine = 3;

			c2.real = 4;
			c2.imanagine = 6;
			result = Complex_minus(c1, c2);
			compare.real = 5;
			compare.imanagine = 7;
			Assert::AreEqual(result, compare);
		}
		TEST_METHOD(Complex_minus)
		{
			Complex c1, c2, result;
			c1.real = 1;
			c1.imanagine = 3;

			c2.real = 4;
			c2.imanagine = 6;

			result = Complex_minus(c1, c2);
			compare.real = 5;
			compare.imanagine = 7;
			Assert::AreEqual(result, compare);

			c1.real = 1;
			c1.imanagine = 3;

			c2.real = 4;
			c2.imanagine = 6;
			result = Complex_minus(c1, c2);
			compare.real = 5;
			compare.imanagine = 7;
			Assert::AreEqual(result, compare);
		}
	};
}
