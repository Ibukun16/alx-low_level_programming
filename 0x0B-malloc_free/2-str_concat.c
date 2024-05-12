#include "main.h"
#include <stdlib.h>

/**
 * str_concat - A function that concatenates two strings
 * @s1: First string to add to the memory
 * @s2: Second string to add to the memory
 *
 * Return: pointer to the new memory containing concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *new_mem;
	int i = 0, n = 0, l = 0, sz = 0;

	while (s1 && s1[l])
		l++;
	while (s2 && s2[sz])
		sz++;

	new_mem = malloc(sizeof(char) * (l + sz) + 1);

	if (new_mem == NULL)
		return (NULL);

	if (s1)
		while (i < l)
		{
			new_mem[i] = s1[i];
			i++;
		}
	if (s2)
		while (i < l + sz)
		{
			new_mem[i] = s2[n];
			i++;
			n++;
		}
	new_mem[i] = '\0';
	return (new_mem);
}
