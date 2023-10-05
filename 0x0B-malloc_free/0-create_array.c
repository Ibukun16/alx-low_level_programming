#include "main.h"
#include <stdlib.h>
/**
 * *create_array -  function that creates an array of chars,
 * and initializes it with a specific char
 * @c: the char to initailize the array with
 * @size: the size of the array
 *
 * Return: Always (0) for success
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
	{
		return (NULL);
	}

	while (i < size)
	{
		p[i] = c;
		i++;
	}
	p[i] = '\0';

	return (p);
}
