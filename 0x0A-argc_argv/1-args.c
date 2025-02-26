#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point into the program
 * @argc: The count of the command line arguments
 * @argv: The string array of the command line arguments
 *
 * Return: 0 for successful execution, else 1 for otherwise
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
