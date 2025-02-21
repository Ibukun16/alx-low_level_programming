#include "main.h"
#include <stdio.h>

/**
 * string_toupper - A function that changes lowercase to uppercase
 * @str: The string to translate
 *
 * Return: The character converted
 */
char *string_toupper(char *str)
{
	int idx;

	for (idx = 0; str[idx] != '\0'; idx++)
		if (str[idx] >= 'a' && str[idx] <= 'z')
			str[idx] = str[idx] - 32;

	return (str);
}
