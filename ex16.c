#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct Person {
	char *name;
	int age;
	int height;
	int weight;
};

struct Person *Person_create (char *name, int age, int height, int weight) {
	struct Person *who = malloc(sizeof(struct Person)); // this allocates memory for the exact size of Person structure
	assert(who != NULL); // checks if malloc didn't return a NULL or invalid pointer

	who->name = strdup(name); // strdup returns a pointer to a new string which is a duplicate of the original string
	who->age = age; // the -> arrow operator in C allows access to members of structs or unions
	who->height = height;
	who->weight = weight;

	return who;
}

void Person_destroy (struct Person *who) {
	assert(who != NULL);

	free(who->name); // free() deallocates the memory previously allocated by malloc, calloc, or realloc
	free(who);
}

void Person_print(struct Person *who) {
	printf("Name :%s\n", who->name);
	printf("\tAge: %d\n", who->age);
	printf("\tHeight: %d\n", who->height);
	printf("\tWeight: %d\n", who->weight);
}

int main (int argce, char *argv[]) {
	//make two people structures
	struct Person *joe = Person_create("Joe Alex", 32, 64, 140);
	struct Person *frank = Person_create("Frank Blank", 20, 72, 180);

	//print them out & where they are in memory
	printf("Joe is at memory location %p:\n", joe);
	Person_print(joe);

	printf("Frank is at memory location %p:\n", frank);
	Person_print(frank);

	//make everyone age by 20 years & print them again
	joe->age += 20;
	joe->height -= 2;
	joe->weight += 40;

	frank->age += 20;
	frank->height -= 1;
	frank->weight += 20;

	Person_print(joe);
	Person_print(frank);

	//destroy them both so we clean up
	Person_destroy(joe);
	Person_destroy(frank);

	return 0;
}

// assert.h include C's assert macro who allows you to create debug assert statements. they can be disabled program wide in the compiler
// stdlib.h contains standard macros & variables related to memory - https://www.tutorialspoint.com/c_standard_library/stdlib_h.htm
// string.h is the standard library for manipulating arrays of characters - https://en.wikibooks.org/wiki/C_Programming/string.h
