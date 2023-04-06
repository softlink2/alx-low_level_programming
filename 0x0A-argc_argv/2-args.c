#include <stdio.h>

int
main(int argc, char **argv)
{
	int c = 0;

	while (c < argc)
		printf("%s\n", argv[c++]);
	return (0);
}