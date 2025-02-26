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
	int idx, n, add = 0;

	if (argc < 2)
	{
		printf("%d\n", argc - 1);
		return (1);
	}

	for (idx = 1; idx < argc; idx++)
	{
		for (n = 0; argv[idx][n]; n++)
			if (argv[idx][n] < 48 || argv[idx][n] > 57)
			{
				printf("Error\n");
				return (1);
			}
		add += atoi(*(argv + idx));
	}
	printf("%d\n", add);
	return (0);
}
