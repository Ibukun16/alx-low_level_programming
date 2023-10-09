#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - A function that concatenate 2 strings
 * @s1: The fisrt string
 * @s2: The second string to add up
 * @n: The count number of second string
 *
 * Return: a pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int x = 0, y = 0, l1 = 0, l2 = 0;

	while (s1 && s1[l1])
		l1++;
	while (s2 && s2[l2])
		l2++;

	if (x < l1)
		p = malloc(sizeof(char) * (l1 + n + 1));
	else
		p = malloc(sizeof(char) * (l1 + l2 + 1));

	if (p == NULL)
		return (NULL);

	while (x < l1)
	{
		p[x] = s1[x];
		x++;
	}
	while (n < l2 && x < (l1 + n))
	{
		p[x] = s2[y];
		x++;
		y++;
	}
	while (n >= l2 && x < (l1 + l2))
	{
		p[x] = s2[y];
		x++;
		y++;
	}
	p[x] = '\0';

	return (p);
}
