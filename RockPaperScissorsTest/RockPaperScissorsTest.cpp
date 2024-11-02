#include "pch.h"
#include "CppUnitTest.h"

extern "C" char RockPaperScissors(char *playerOne[], char *playerTwo[]);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RockPaperScissorsTest
{
	TEST_CLASS(RockPaperScissorsTest)
	{
	public:
		
		TEST_METHOD(PlayerOneWinsOutputTest)
		{
			char Result[] = { 0 };
			char* playerOne[] = {"Scissors"};
			char* playerTwo[] = {"Paper"};
			Result[RockPaperScissors(playerOne, playerTwo)];
			Assert::AreEqual("", Result);
		}
	};
}
