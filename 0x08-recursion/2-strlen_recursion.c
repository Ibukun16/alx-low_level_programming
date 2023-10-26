#include "main.h"
/**
 * _strlen_recursion - Afunction that determines string length
 * @s: The string in focus
 *
 * Return:String length
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
