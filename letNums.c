#include <stdio.h>

int main (int argc, char *argv[]){

	int i = 0;
	char vowels[] = "AaEeIiOoUu";

	for (i = 0; vowels[i] != '\0'; i++) {

		printf("Num for %c: %d\n", vowels[i], vowels[i]);
	
	}

	return 0;

}
