#include <stdio.h>

void op(char *a, int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		printf("%.2hhx", a[c]);
		if (c < n - 1)
			printf(" ");
	}

	printf("\n");
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Error!\n");
		return(1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		return(2);
	}

	op((char *) &main, atoi(argv[1]));

	return(0);
}
