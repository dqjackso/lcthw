#include <stdio.h>

int main (int argc, char *argv[]) {

	if (argc > 2) {

		printf("ERROR: ONLY ENTER A SINGLE ARGUMENT");

		return 1;

	}

	int startNumber = argv[1][0] - 0;

	if (startNumber < 86) {

		int newNumber = startNumber + 32;

		printf("Input: %c | Output: %c", startNumber, newNumber);

		return newNumber;
	} else {

		printf("ERROR: YOU MIGHT HAVE ENTERED A LOWER CASE LETTER");

		return 1;

	}

}
