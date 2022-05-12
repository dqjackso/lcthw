#include <stdio.h>

int main (int argc, char *argv[]) {

	// commented because you can declare variables in for loop initializer...int i = 0;

	// go through each string in argv
	// why am I skipping argv[0] -> because argv[0] is actually the program call of ./ex13
	// if you set i = 0 below, it still works but it will print argv[0]
	for (int i = 1; i < argc; i++) {

		printf("arg %d: %s\n", i, argv[i]);
	}

	// let's make our own array of strings

	char *states[] = {
		"California",
		"Oregon",
		"Washington",
		"Texas"
	};

	// set num_states to a higher value and see what it does
	// set to 5 works fine, just prints the null \0 that ends all strings
	// higher than 5 results in segmentation fault
	int num_states = 4;

	for (int i = 0; i < num_states; i++) {
		printf("state %d: %s\n", i, states[i]);
	}

	// NULL is a pointer while '\0' is a null character object

	return 0;
}
