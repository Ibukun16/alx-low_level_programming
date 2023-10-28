#include "main.h"
/**
 * *_memcpy - A function that copies memory from the source
 *	area to the destination area
 * @dest: The destination memory area
 * @src: The source memory area
 * @n: The number of memory spaces to be copied
 *
 * Return: Success (0)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
