#include <stdio.h>

int convertToLower (int argc, char *argv[]) {

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


int main(int argc, char *argv[]) {

	if (argc != 2) {
		printf("ERROR: You need one argument.\n");
		//this is how you abort a program
		return 1;
	}

	int i = 0;
	for (i = 0; argv[1][i] != '\0'; i++) {
		char letter = argv[1][i];

		switch (letter) {
			case 'a':
			case 'A':
				printf("%d: 'A'\n", i);
				break;

			case 'e':
			case 'E':
				printf("%d: 'E'\n", i);
				break;

			case 'i':
			case 'I':
				printf("%d: 'I'\n", i);
				break;

			case 'o':
			case 'O':
				printf("%d: 'O'\n", i);
				break;

			case 'u':
			case 'U':
				printf("%d: 'U'\n", i);
				break;

			case 'y':
			case 'Y':
				if (i > 2) {
					printf("%d: 'Y'\n", i);
				}
				break;

			default:
				printf("%d: %c is not a vowel\n", i, letter);
		}
	}

	return 0;
}
