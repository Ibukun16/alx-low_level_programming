#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - a function tht finds the length of a string
 * @s: the string in consideration
 *
 * Return: length of a string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * array - a function that creates array, initializes it a character x,
 * and terminate with null byte.
 * @size: size of the array.
 *
 * Description: if there is an insufficient space, the function terminates
 * with an error status 98
 *
 * Return: a pointer to the array
 */
char *array(int size)
{
	char *ar;
	int i;

	ar = malloc(sizeof(char) * size);

	if (ar == NULL)
		exit(98);

	for (i = 0; i < (size - 1); i++)
	{
		ar[i] = 'x';
	}
	ar[i] = '\0';
	return (ar);
}

/**
 * iterate - a function that iterate through a string of numbers containing
 * leading zeros until it hits a non_zero number
 * @st: the string of numbers
 *
 * Return: a pointer to a non-zero element
 */
char *iterate(char *st)
{
	while (*st && *st == 0)
		st++;
	return (st);
}

/**
 * find_dgt - a function that convert a digit to the corresponding integer
 * @d: the digit to be converted
 *
 * Description: if d is a non digit character, function exit with status 98
 *
 * Return: with the converted integer
 */
int find_dgt(char d)
{
	int dgt = d - '0';

	if (dgt < 0 || dgt > 9)
	{
		printf("Error\n");
		exit(98);
	}
	return (dgt);
}
/**
 * _prod - a function that multiplies a string of numbers by a single digit
 * @p: the buffer that stores that result
 * @stg: the string of numbers
 * @dt: a single digit number
 * @z: the leading zeros where necessary
 *
 * Description: if p contains a non-digit number, the function exit
 * exit with a status value of 98.
 */
void _prod(char *p, char *stg, int dt, int z)
{
	int l, n, tens = 0;

	l = _strlen(stg) - 1;
	stg += l;

	while (*p != '\0')
	{
		*p = 'x';
		p++;
	}
	p--;

	while (z--)
	{
		*p = '0';
		p--;
	}
	for (; l >= 0; l--, stg--, p--)
	{
		if (*stg < '0' || *stg > '9')
		{
			printf("Error\n");
			exit(98);
		}
		n = (*stg - '0') * dt;
		n += tens;
		*p = (n % 10) + '0';
		tens = n / 10;
	}
	if (tens)
		*p = (tens % 10) + '0';
}
/**
 * num_sum - a function that add up the count of numbers stored in 2 strings
 * @b: the buffer that stores the running final product
 * @next: the next multiplication product to be added
 * @len: length of the next multiplation product
 */
void num_sum(char *b, char *next, int len)
{
	int i, tens = 0;

	while (*(b + 1))
		b++;
	while (*(next + 1))
		next++;
	for (; *b != 'x'; b--)
	{
		i = (*b  - '0') + (*next - '0');
		i += tens;
		*b = (i % 10) + '0';
		tens = i / 10;

		next--;
		len--;
	}
	for (; len >= 0 && *next != 'x'; len--)
	{
		i = (*next - '0');
		i += tens;
		*b = (i % 10) + '0';
		tens = i / 10;

		b--;
		next--;
	}
	if (tens)
		*b = (tens % 10) + '0';
}

/**
 * main - a function that multiply 2 positive numbers
 * @argc: count of the number of argument
 * @argv: a vector of array of pointers to the argument
 *
 * Description: If the number of arguments is incorrect or one number
 * contains non-digits, the function exits with a status of 98.
 *
 * Return: Return the result of multiplication as mul
 */
int main(int argc, char *argv[])
{
	char *res, *next;
	int size, i, dgt, a = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (*(argv[1]) == '0')
		argv[1] = iterate(argv[1]);
	if (*(argv[2]) == '0')
		argv[2] = iterate(argv[2]);
	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		printf("0\n");
		return (0);
	}
	size = _strlen(argv[1]) + _strlen(argv[2]);
	res = array(size + 1);
	next = array(size + 1);

	for (i = _strlen(argv[2]) - 1; i >= 0; i--)
	{
		dgt = find_dgt(*(argv[2] + i));
		_prod(next, argv[1], dgt, a++);
		num_sum(res, next, size - 1);
	}
	for (i = 0; res[i]; i++)
	{
		if (res[i] != 'x')
			putchar(res[i]);
	}
	putchar('\n');

	free(next);
	free(res);

	return (0);
}
