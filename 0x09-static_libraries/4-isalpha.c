#include "main.h"

/**
 * _isalpha - Identify alphabet
 * @c: alphabet to look out for
 *
 * Description: This programme checks for alphabetic character
 * Return: Always 0 (Success).
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
