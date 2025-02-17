#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Function that copies the string pointed to by src.
 * @dest: The pointer to the destination variable
 * @src: The pointer to the source variable
 *
 * Return: Pointer to the destination variable.
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0, count;

	while (src[len] != '\0')
		len++;

	for (count = 0; count < len; count++)
		dest[count] = src[count];

	dest[count] = '\0';
	return (dest);
}
