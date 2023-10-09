#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include<string.h>

/**
 * main - a function that multiply 2 positive numbers
 * @argc: count of the number of argument
 * @argv: a vector of array of the argument
 *
 * Return: Return the result of multiplication as mul
 */
int main(int argc, char *argv[])
{
	unsigned long mul;
	int  num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (num1 = 1; num1 < argc; num1++)
	{
		for (num2 = 0; argv[num1][num2] != '\0'; num2++)
		{
			if (argv[num1][num2] > 57 || argv[num1][num2] < 48)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	mul = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", mul);

	return (0);
}

