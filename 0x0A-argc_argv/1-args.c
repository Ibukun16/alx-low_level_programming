#include "main.h"
#include <stdio.h>
/**
 * main - A program that prints the number of arguments supplied
 * to the commandline.
 * argc: The count of the number of arguments.
 * argv: A vector array containing the argument strings.
 *
 * Return: 0 for success.
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	if (argc)
		printf("%d\n", argc - 1);
	return (0);
}
