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
 * main - A program that prints the result of multiplication of 2 numbers
 * @argc: count of arguments
 * @argv: an array vector containing arguments
 *
 * Return: Always success (0) else (1)
 */
int main(int argc, char *argv[])
{
	int x, y, prod;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	x = _atoi(argv[1]);
	y = _atoi(argv[2]);
	prod = x * y;

	printf("%d\n", prod);
	return (0);

}
