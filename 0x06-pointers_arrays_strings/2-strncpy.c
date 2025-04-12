
#include "main.h"
/**
 * _strncpy - copies a string and work
 * exactly like strncpy in standard library
 * @dest: The destination value
 * @src: The source value
 * @n: The number of times to copy the source
 *
 * Return: char value
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count = 0;

	if (n <= 0)
	       return (dest);	

	for (; src[count] != '\0' && count < n; count++)
		dest[count] = src[count];
	
	dest[count] = '\0';

	return (dest);
}
