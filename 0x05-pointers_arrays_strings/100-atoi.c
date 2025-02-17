#include "main.h"
#include <stdio.h>

/**
 * _atoi - A function that converts a string to integer
 * @s: Pointer to the string variable
 *
 * Return: 0 for successful execution
 */
int _atoi(char *s)
{
	int i, n = 1;
	unsigned int p = 0;

	for (i = 0; !(s[i] >= '0' && s[i] <= '9') && s[i] != '\0'; i++)
		if (s[i] == '-')
			n *= -1;

	for (; (s[i] >= '0' && s[i] <= '9' && s[i] != '\0'); i++)
		p = (p * 10) + (s[i] - '0');

	p *= n;
	return (p);
}
