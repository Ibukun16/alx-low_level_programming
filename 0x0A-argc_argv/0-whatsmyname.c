#include "main.h"
#include <stdio.h>
/**
 * main - a programme that prints its name and terminate to a new line
 * @argc: the count of an argument
 * @argv: an array that contains the argument
 *
 * Return: The argument
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
