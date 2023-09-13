#include "main.h"

/**
 * _islower - identify lowercase letter
 * @code to identify lower case letter
 * Return: Always o (success)
 */
int _islower(int c)
{
	char c;

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
