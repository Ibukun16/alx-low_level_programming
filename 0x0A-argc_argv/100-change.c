#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - A programme tha prints the minimum no of coins to
 * change for an amount of money
 * @argc: The count for an argument
 * @argv: The vector of an array of argument
 *
 * Return: Always (0) success
 */
int main(int argc, char *argv[])
{
	int ans, a, n;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	ans = 0;

	if (n < 0)
	{
		printf("0\n");
		return (0);
	}
	for (a = 0; a < 5 && n >= 0; a++)
	{
		while (n >= coins[a])
		{
			ans++;
			n -= coins[a];
		}
	}
	printf("%d\n", ans);
	return (0);
}
