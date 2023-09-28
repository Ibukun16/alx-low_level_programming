#include "main.h"

/**
 * _strlen_recursion - A function that returns the length of a string
 * @s: The string in focus
 *
 * Return: void
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
		return (0);
}



