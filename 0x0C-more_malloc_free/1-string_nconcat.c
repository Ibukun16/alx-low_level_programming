#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - A function that concatenate  two strings
 *
 * @s1: The first of the two strings to concatenate
 * @s2: The second of the two strings to concatenate
 * @n: The number of characters in s2 to concatenate
 *
 * Return: The concatenated string else empty
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, a = 0, b = 0;
	char *mem;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n >= len2)
		n = len2;

	mem = malloc(sizeof(char) * (len1 + n + 1));

	if (mem == NULL)
		return (NULL);

	while (len1)
	{
		mem[a] = s1[a];
		a++;
	}
	while (n && n < (len1 + n))
		mem[a++] = s2[b++];

	mem[a] = '\0';

	return (mem);
}

