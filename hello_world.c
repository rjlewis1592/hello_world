#include "cmn_hdr.h" 

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

	print_default();
	return 0;
}
