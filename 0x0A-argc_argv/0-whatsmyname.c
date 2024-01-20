#include "main.h"
#include <stdio.h>
/**
 * main - A program that prints its own name.
 * argc: The count of the number of argument supplied to the command line.
 * argv: An array vector of the argument strings.
 *
 * Return: 0 for success.
 */
int main(int argc, char *argv[])
{
	if (argc >= 1)
		printf("%s\n", argv[0]);
	return (0);
}
