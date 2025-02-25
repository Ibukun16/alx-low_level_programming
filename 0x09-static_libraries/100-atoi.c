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
	int i, sign = 1;
	unsigned int result = 0;

	for (i = 0; !(s[i] >= '0' && s[i] <= '9') && s[i] != '\0'; i++)
		sign *= (s[i] == '-') ? -1 : 1;

	for (; (s[i] >= '0' && s[i] <= '9' && s[i] != '\0'); i++)
		result = (result * 10) + (s[i] - '0');

	return (result * sign);
}
