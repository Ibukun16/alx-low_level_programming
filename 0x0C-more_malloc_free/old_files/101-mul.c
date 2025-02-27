#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>


/**
 * is_digit - check if there is a non digit char
 * @str: The string to evaluate
 *
 * Return: 0 for non-digit and 1 for digit
 */
int is_digit(char *str)
{
	int n;

	for (n = 0; (str[n]); n++)
		if ('0' > str[n] || str[n] > '9')
			return (0);
	return (1);
}


/**
 * str_len - A function that determine the string length
 *
 * @str: The string to evaluate
 *
 * Return: the string length
 */
int str_len(char *str)
{
	int c = 0;

	while (str[c] != '\0')
		c++;

	return (c);
}


/**
 * error_handler - A function that handles the error.
 *
 * Return: void
 */
void error_handler(void)
{
	printf("Error\n");
	exit(98);
}


/**
 * main - The main function that multiplies two positive integers.
 *
 * @argc: The count of the number of arguments.
 * @argv: An array of the integers to multiply.
 *
 * Return: 0 for success else 1 for failure.
 */
int main(int argc, char *argv[])
{
	int num1, num2, l1, l2, tp, *mem, i, j, n, b = 0;
	char *str1 = argv[1], *str2 = argv[2];

	if (argc != 3 || !is_digit(str1) || !is_digit(str2))
		error_handler();
	l1 = str_len(str1);
	l2 = str_len(str2);
	mem = malloc(sizeof(int) * (l1 + l2 + 1));
	if (mem == NULL)
		return (1);
	for (n = 0; n < (l1 + l2 + 1); n++)
		mem[n] = 0;
	for (i = l1 - 1; i >= 0; i--)
	{
		num1 = str1[i] - '0';
		tp = 0;
		for (j = l2 - 1; j >= 0; j--)
		{
			num2 = str2[j] - '0';
			tp += mem[i + j + 1] + (num1 * num2);
			mem[i + j + 1] = tp % 10;
			tp /= 10;
		}
		if (tp > 0)
			mem[i + j + 1] += tp;
	}
	for (n = 0; n < (l1 + l2); n++)
	{
		if (mem[n])
			b = 1;
		if (b)
			_putchar(mem[n] + '0');
	}
	if (!b)
		_putchar('0');

	_putchar('\n');
	free(mem);
	return (0);
}
