#include <stdio.h>
#include <string.h>

int main()
{
	// variables
	char place_name[30] = "";
	char place_adjective[30] = "";
	char place_verb[30] = "";

	char person_name[30] = "";
	char person_verb[30] = "";
	char person_adjective[30] = "";

	// input
	printf("Input place name: ");
	fgets(place_name, sizeof(place_name), stdin);
	place_name[strlen(place_name) - 1] = '\0';

	printf("Input place adjective: ");
	fgets(place_adjective, sizeof(place_adjective), stdin);
	place_adjective[strlen(place_adjective) - 1] = '\0';

	printf("Input place verb: ");
	fgets(place_verb, sizeof(place_verb), stdin);
	place_verb[strlen(place_verb) - 1] = '\0';

	printf("Input person name: ");
	fgets(person_name, sizeof(person_name), stdin);
	person_name[strlen(person_name) - 1] = '\0';

	printf("Input person adjective: ");
	fgets(person_adjective, sizeof(person_adjective), stdin);
	person_adjective[strlen(person_adjective) - 1] = '\0';

	printf("Input person verb: ");
	fgets(person_verb, sizeof(person_verb), stdin);
	person_verb[strlen(person_verb) - 1] = '\0';

	// output
	printf("I went to a %s %s to %s.\n", place_adjective, place_name, place_verb);
	printf("There, I met a %s %s that %s.\n", person_adjective, person_name, person_verb);

	return 0;
}
