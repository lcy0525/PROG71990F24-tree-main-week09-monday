#include "pch.h"
#include "CppUnitTest.h"

extern "C" float Add(int,float);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			float Result = 0;
			Result = Add(2, 12.5f);
			Assert::AreEqual(0.5f, Result,0.00001f);
		}
	};
}
