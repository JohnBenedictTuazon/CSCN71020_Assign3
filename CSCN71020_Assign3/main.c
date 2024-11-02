#include <stdio.h>
#include "main.h"
#define MAXCHARLIM 8

char RockPaperScissors(char*, char*);

int main(void) {

	return 0;
}

char RockPaperScissors(char *playerOne, char* playerTwo) {

	if ((*playerOne == "Rock" && *playerTwo == "Scissors") || (*playerOne == "Paper" && *playerTwo == "Rock") || (*playerOne == "Scissors" && *playerTwo == "Paper")) {
		char outcome[] = "Player1";
		printf("%s", outcome);
		return outcome;

	}
	else if ((*playerOne == "Rock" && *playerTwo == "Paper") || (*playerOne == "Paper" && *playerTwo == "Scissors") || (*playerOne == "Scissors" && *playerTwo == "Rock")) {
		char outcome[] = "Player2";
		printf("%s", outcome);
		return outcome;
	}
	else if ((*playerOne == "Rock" && *playerTwo == "Rock") || (*playerOne == "Paper" && *playerTwo == "Paper") || (*playerOne == "Scissors" && *playerTwo == "Scissors")) {
		char outcome[] = "Draw";
		printf("%s", outcome);
		return outcome;
	}
	else {
		char outcome[] = "Invalid";
		printf("%s", outcome);
		return outcome;
	}

	
}