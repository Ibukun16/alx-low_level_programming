#include "main.h"
#include <stdio.h>

/**
 * leet - A function that encodes a string into 1337
 * @s: The string to encode
 *
 * Return: The encoded string.
 */
char *leet(char *s)
{
	char str[] = "oOlLeEaAtT";
	char code[] = "0011334477";
	int idx, count;

	for (idx = 0; s[idx] != '\0'; idx++)
		for (count = 0; str[count] != '\0'; count++)
			if (s[idx] == str[count])
				s[idx] = code[count];
	return (s);
}
