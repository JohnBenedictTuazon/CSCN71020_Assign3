#include "pch.h"
#include "CppUnitTest.h"

extern "C" char RockPaperScissors(char*, char*);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RockPaperScissorsTest
{
	TEST_CLASS(RockPaperScissorsTest)
	{
	public:
		
		TEST_METHOD(PlayerOneWinsOutputTest)
		{
			char Result[] = {0};
			char *playerOne = "Scissors";
			char *playerTwo = "Scissors";
			Result[RockPaperScissors(playerOne, playerTwo)];
			Assert::AreEqual("Draw", Result);
		}
	};
}
