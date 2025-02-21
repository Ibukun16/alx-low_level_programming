#include "main.h"
#include <stdio.h>

/**
 * rot13 - A function that encodes a string using rot13
 * @str: Pointer to the string
 *
 * Return: The encoded string
 */
char *rot13(char *str)
{
	int count;

	for (count = 0; str[count] != '\0'; count++)
		if ((str[count] >= 'a' && str[count] <= 'z') ||
			    (str[count] >= 'A' && str[count] <= 'Z'))
		{
			if ((str[count] >= 'a' && str[count] < 'n') ||
					(str[count] >= 'A' && str[count] < 'N'))
				str[count] += 13;
			else
				str[count] -= 13;
		}
	return (str);
}
