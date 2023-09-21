#include "main.h"
/**
 * *_strncat - concatenate two strings
 * @dest: string to append to
 * @src: string to add
 * @n: size of byte to use
 * concatenates two strings with a function
 * that  will use at most n bytes from src; and
 * src does not need to be null-terminated since
 * it contains n or more bytes.
 * Return: Success(0).
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b;

	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;

	while (src[b] != '\0' && b < n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';

	return (dest);
}
