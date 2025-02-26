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
	int count, mul = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	for (count = 1; count < argc; count++)
		mul *= atoi(*(argv + count));

	printf("%d\n", mul);
	return (0);
}
