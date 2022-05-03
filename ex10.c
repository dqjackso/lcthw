#include <stdio.h>

char lowerCase (char originalLetter) {

        int startNumber = originalLetter - 0;

        if ((64 < startNumber) && (startNumber < 91)) {
               int newNumber = startNumber + 32;
               char returnLetter = newNumber;
               return returnLetter;
        } else if ((96 < startNumber) && (startNumber < 123)) {
               char returnLetter = startNumber;
               return returnLetter;
        } else {

	return 'E';

        }
 }


int main(int argc, char *argv[]) {

	if (argc != 2) {
		printf("ERROR: You need at least one argument.\n");
		//this is how you abort a program
		return 1;
	}

	int i = 0;
	for (i = 0; argv[1][i] != '\0'; i++) {
		char lowercase = lowerCase(argv[1][i]);

		switch (lowercase) {
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				printf("%d: %c\n", i, lowercase);
				break;
			case 'y':
				if (i > 2) {

					printf("%d: %c\n", i, lowercase);

				}
				break;
			default:
				printf("%d: %c is not a vowel\n", i, lowercase);
		}
	}

	return 0;
}
