#include "pch.h"
#include "CppUnitTest.h"
#include "../Laboratorna5.1/Laboratorna5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			
			double result = k(2, 3);
			Assert::AreEqual(result, 0.657143, 0.0001);

			
			
		}
	};
}
