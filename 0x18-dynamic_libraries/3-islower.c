#include "main.h"

/**
 * _islower - identify lowercase letter
 * @c: The code to look for
 *
 * Description: A programme that identifies lower case letter
 * Return: Always o (success)
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
