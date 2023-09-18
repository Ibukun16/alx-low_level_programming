#include "main.h"
/**
 * *_strcpy - copy a string to a buffer
 *
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int l, m;

	l = 0;
	while (src[l] != '\0')
	{
		l++;
	}
	m = 0;

	while (m < l)
	{
		dest[m] = src[m];
		m++;
	}
	dest[m] = '\0';

	return (dest);
}
