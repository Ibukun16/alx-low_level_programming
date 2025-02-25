#include "main.h"
#include <stdio.h>

/**
 * _strlen - A function that returns the length of a string
 * @s: The string variable
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}
