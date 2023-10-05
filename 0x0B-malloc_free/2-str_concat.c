#include "main.h"
#include <stdlib.h>
/**
 * str_concat - a function that concatenate 2 strings
 * @s1: first string to join
 * @s2: second string to join
 *
 * Return: pointer to a new memory that contains the contenated string
 */
char *str_concat(char *s1, char *s2)
{	
	char *p;
	unsigned int x, y, l1, l2;

	x = 0;
	y = 0;
	l1 = 0;
	l2 = 0;

	while (s1 && s1[l1])
	{
		l1++;
	}
	while (s2 && s2[l2])
	{
		l2++;
	}
	p = (char *)malloc((sizeof(char) * (l1 + l2)) + 1);

	if (p == NULL)
	{
		return (NULL);
	}

	if (s1)
	{
		while (x < l1)
		{
			p[x] = s1[x];
			x++;
		}
	}
	if (s2)
	{
		while (x < (l1 + l2))
		{
			p[x] = s2[y];
			x++;
			y++;
		}
	}
	p[x] = '\0';

	return (p);
}
