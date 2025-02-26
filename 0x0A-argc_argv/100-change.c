#include <stdio.h>
#include <stdlib.h>

/**
 * main - The entry point to the function
 * @argc: The count of the command line arguments
 * @argv: The string array of the command line arguments
 *
 * Return: 0 for successful execution, else 1
 */
int main(int argc, char **argv)
{
	int cents, count, n, coin[5] = {25, 10, 5, 2, 1};

	cents = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (cents < 0)
	{
		printf("0\n");
		return (1);
	}

	for (count = 0; count < 5 && cents; count++)
	{
		n += cents / coin[count];
		cents %= coin[count];
	}
	printf("%d\n", n);
	return (0);
}
