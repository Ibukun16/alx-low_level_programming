#include "main.h"
#include <stdio.h>

/**
 * cap_string - A function that capitalize all words of a string
 * @str: The string of words to capitalize
 *
 * Return: capitalize string.
 */
char *cap_string(char *str)
{
	int idx, count;
	char separator[14] = {' ', '\t', '\r', '\n', ',', '.', '!', '?',
		'"', '(', ')', '{', '}', ';'};

	for (idx = 0; str[idx] != '\0'; idx++)
	{
		if (idx == 0 && str[idx] >= 'a' && str[idx] <= 'z')
			str[idx] -= 32;

		for (count = 0; count < 14; count++)
			if (str[idx] == separator[count])
				if (str[idx + 1] >= 'a' && str[idx + 1] <= 'z')
					str[idx + 1] -= 32;
	}
	return (str);
}
