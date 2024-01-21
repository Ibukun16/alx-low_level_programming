#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - a program that add up two positive numbers.
 * @argc: the count of number of arguments on the commandline.
 * @argv: A vector array of the arguments string.
 *
 * Return: 0 for success, 1 for error.
 */
int main(int argc, char *argv[])
{
	int sum = 0, a, b;

	if (argc < 2)
		printf("0\n");
	else
	{
		for (a = 1; a < argc; a++)
		{
			for (b = 0; argv[a][b]; b++)
			{
				if (isdigit(argv[a][b]) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[a]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
