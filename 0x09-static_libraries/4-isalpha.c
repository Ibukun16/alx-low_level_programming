#include "main.h"

/**
 * _isalpha - A function that checks for alphabetic character
 * @c: The variable that stores the alphabet character
 *
 * Return: 1 if c is a letter, lowercase or uppercase else 0.
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
