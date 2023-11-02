#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - A function that add up 2 positive numbers
 * @argc: The count of number of arguments
 * @argv: An array containing the arguments
 *
 * Return: The result of numbers addition
 */
int main(int argc, char *argv[])
{
	int sum, i, n;

	sum = 0;
	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (n = 0; argv[i][n] != '\0'; n++)
		{
			if (argv[i][n] < '0' || argv[i][n] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		if (atoi(argv[i]) >= 0)
			sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
