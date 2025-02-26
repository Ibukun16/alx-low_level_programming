#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that multiply two numbers.
 * @argc: The count of number of arguments on the commandline.
 * @argv: A vector array of the arguments string.
 *
 * Return: 0 for success, 1 for error.
 */
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
			mul *= atoi(argv[i]);
		printf("%d\n", mul);
	}
	return (0);
}
