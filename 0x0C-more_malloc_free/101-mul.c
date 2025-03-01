#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_digit - A function that checks if string consists of digits only
 * @s: The string to check if it is digits
 *
 * Return: 1 if string consists of digits only, else 0.
 */
int is_digit(char *s)
{
	while (*s != '\0')
	{
		if (*s < '0' || *s > '9')
			return (0);
		s++;
	}
	return (1);
}


/**
 * _strlen - A function that returns the length of a given string
 * @str: pointer to the string variable
 *
 * Return: Length of the given string, else NULL.
 */
int _strlen(char *str)
{
	int count = 0;

	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}

/**
 * main - Function that multiplies two positive numbers and prints the result
 * @argc: The count of an argument
 * @argv: The vector array of the argument
 *
 * Return: 0 for successful execution, else exit 98.
 */
int main(int argc, char **argv)
{
	int *arr, num1, num2, len1, len2, carry, start, i, j, n = 0;

	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}
	len1 = _strlen(argv[1]);
	len2 = _strlen(argv[2]);
	arr = malloc(sizeof(int) * (len1 + len2 + 1));
	if (arr == NULL)
		return (1);
	for (start = 0; start < (len1 + len2 + 1); start++)
		arr[start] = 0;
	for (i = len1 - 1; i >= 0; i--)
	{
		num1 = argv[1][i] - '0';
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			num2 = argv[2][j] - '0';
			carry += arr[i + j + 1] + (num1 * num2);
			arr[i + j + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			arr[i + j + 1] += carry;
	}
	for (start = 0; start < (len2 + len1); start++)
	{
		if (arr[start])
			n = 1;
		if (n)
			_putchar(arr[start] + '0');
	}
	if (!n)
		_putchar('0');
	_putchar('\n');
	free(arr);
	return (0);
}
