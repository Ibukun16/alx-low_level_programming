#include "main.h"
#include <stdio.h>
/**
 * main - a program that prints the arguments supllied to the
 * command line, each argument starting on a new line.
 * @argc: Count of the number of arguments.
 * @argv: A vector array of the arguments strings.
 *
 * Return: 0 for success.
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc)
	{
		for (i = 0; i < argc; i++)
			printf("%s\n", argv[i]);
	}
	return (0);
}
