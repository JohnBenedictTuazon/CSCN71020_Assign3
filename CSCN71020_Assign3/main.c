#include <stdio.h>
#include "main.h"

char RockPaperScissors(char *playerOne[], char *playerTwo[]);

int main(void) {
	return 0;
}

// The function: RockPaperScissors accepts two char arrays as input
// The user can type in any series of characters
char RockPaperScissors(char* playerOne[], char* playerTwo[]) {

	// The function outputs a single char array: outcome
	char* outcome[] = { "Player1","Player2","Draw", "Invalid" };

	// Function determines who wins the game of Rock, Paper, Scissors
	if ((*playerOne == 'R' && *playerTwo == 'S') || (*playerOne == 'P' && *playerTwo == 'R') || (*playerOne == 'S' && *playerTwo == 'P')) {
		printf("%s", outcome[0]);
		return *outcome[0];
	}
	else if ((*playerOne == 'R' && *playerTwo == 'P') || (*playerOne == 'P' && *playerTwo == 'S') || (*playerOne == 'S' && *playerTwo == 'R')) {
		printf("%s", outcome[1]);
		return *outcome[1];
	}
	else if ((*playerOne == 'R' && *playerTwo == 'R') || (*playerOne == 'P' && *playerTwo == 'P') || (*playerOne == 'S' && *playerTwo == 'S')) {
		printf("%s", outcome[2]);
		return *outcome[2];
	}
	else {
		printf("%s", outcome[3]);
		return *outcome[3];
	}
}