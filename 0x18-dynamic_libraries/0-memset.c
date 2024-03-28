#include "main.h"
/**
 * *_memset - A function that fills memory with a constant byte
 * @s: memory area to be filled
 * @b: The constant to be filled in the memory space
 * @n: The number of memory spaces to be filled
 *
 * Return: success (0).
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
