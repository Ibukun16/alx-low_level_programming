#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _atoi - A program that converts string to integer
 * @s: The string in focus
 *
 * Return: The int converted from the string
 */
int _atoi(char *s)
{
	int a, b, c, dgt, len, n;

	a = 0;
	b = 0;
	c = 0;
	dgt = 0;
	len = 0;
	n = 0;

	while (s[len] != '\0')
		len++;

	while (a < len && c == 0)
	{
		if (s[a] == '-')
			b++;
		if (s[a] >= '0' && s[a] <= '9')
		{
			dgt = s[a] - '0';
			if (b % 2)
				dgt = -dgt;
			n = n * 10 + dgt;
			c = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			c = 0;
		}
		a++;
	}
	if (c == 0)
		return (0);
	return (n);
}


/**
 * main - A program that prints the result of addition of 2 positive numbers
 * @argc: count of arguments
 * @argv: an array vector containing arguments
 *
 * Return: Always success (0) else (1)
 */
int main(int argc, char *argv[])
{
	int x, y, z, n, sum;

	sum = 0;

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (argv[x][y] > '9' || argv[x][y] < '0')
			{
				puts("Error");
				return (1);
			}
		}
	}

	for (z = 1; z < argc; z++)
	{
		n = _atoi(argv[z]);
		if (n >= 0)
		{
			sum += n;
		}
	}
	printf("%d\n", sum);
	return (0);
}

