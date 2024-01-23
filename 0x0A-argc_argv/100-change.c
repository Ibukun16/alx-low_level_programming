#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - A program that determine the minimum number of coins
 * to make change for an amount of money.
 * @argc: The count of number of arguments given to the command line.
 * @argv: An array containing the argument strings.
 *
 * Return: 0 for success and 1 for error.
 */
int main(int argc, char *argv[])
{
	int amt, c, i, change = 0;
	int coin[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 1)
		printf("0\n");
	else
	{
		amt = atoi(argv[1]);
		for (i = 0; i < 5 && amt; i++)
		{
			c = amt / coin[i];
			change += c;
			amt -= c * coin[i];
		}
		printf("%d\n", change);
	}
	return (0);
}
