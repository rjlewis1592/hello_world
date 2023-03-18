#include "cmn_hdr.h" 

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
	if (argc != 2) {
		fprintf(stderr, "Usage: <a.out> <animal_str>\n");
		exit (EXIT_FAILURE);
	}

	if (strcmp(argv[1], "cat") == 0) {
		print_cat();
	} else if (strcmp(argv[1], "dog") == 0) {
		print_dog();
	} else {
		print_default();
	}

	return 0;
}