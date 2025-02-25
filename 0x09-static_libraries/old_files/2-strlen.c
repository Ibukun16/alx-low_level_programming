#include "main.h"
/**
 * _strlen - finds and return the length of a string
 * @s: The string in focus
 *
 * Return: Success value (0).
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
