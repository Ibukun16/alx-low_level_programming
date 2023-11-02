#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - A function that returns a change for an amount
 * of money
 * @argc: The count of number of arguments
 * @argv: An array containing the number of arguments
 *
 * Return: The changed value in cent
 */
int main(int argc, char *argv[])
{
	int amt, i,  coins;
	int cent[] = {25, 10, 5, 2, 1};

	coins = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amt = atoi(argv[1]);
	if (amt < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		while (amt >= cent[i])
		{
			coins++;
			amt -= cent[i];
		}
	}
	printf("%d\n", coins);
	return (0);
}
