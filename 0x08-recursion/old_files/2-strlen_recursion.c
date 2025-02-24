#include "main.h"
/**
 * _strlen_recursion - A function that determine the length of
 * a string by recursion
 * @s: The string whose length to determine
 *
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s)
	{
		l++;
		l += _strlen_recursion(s + 1);
	}
	return (l);
}
