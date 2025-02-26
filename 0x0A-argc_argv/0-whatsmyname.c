#include <stdio.h>
#include <stdlib.h>

/**
 * main - The entry point into the function
 * @argc: the count of the command line argument
 * @argv: The string array of the command line argument
 *
 * Return: 0 for successful execution and 1 for otherwise
 */
int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", *argv);
	return (0);
}
