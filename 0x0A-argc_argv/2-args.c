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
	int count;

	for (count = 0; count < argc; count++)
		printf("%s\n", *(argv + count));

	return (0);
}
