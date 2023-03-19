#include "cmn_hdr.h" 

void print_tiger()
{
	printf("Grrr !!\n");
}

void print_crow()
{
	printf("Kaw !!\n");
}


void print_cat()
{
	printf("Meow !!\n");
}

void print_dog()
{
	printf("Bow !!\n");
}

void print_default()
{
	printf("hello world\n");
}

int main(int argc, char *argv[])
{
	printf("Hi !, have a ncie day\n");

	if (argc != 2) {
		fprintf(stderr, "Usage: <a.out> <animal_str>\n");
		exit (EXIT_FAILURE);
	}

	if (strcmp(argv[1], "cat") == 0) {
		print_cat();
	} else if (strcmp(argv[1], "dog") == 0) {
		print_dog();
	} else if (strcmp(argv[1], "crow") == 0) {
		print_crow();
	} else if (strcmp(argv[1], "tiger") == 0) {
		print_tiger();
	} else {
		print_default();
	}

	return EXIT_SUCCESS;
}