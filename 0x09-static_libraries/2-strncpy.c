#include "main.h"
/**
 * _strncpy - copies a string and work
 * exactly like strncpy in standard library
 * @dest: The destination value
 * @src: The source value
 * @n: The number of times to copy
 *
 * Return: char value
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (src[a] != '\0' && a < n)
	{
		dest[a] = src[a];
		a++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
