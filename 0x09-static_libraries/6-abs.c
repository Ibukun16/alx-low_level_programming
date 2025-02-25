#include "main.h"

/**
 * _abs - A function that computes the absolute value of an integer
 * @n: The integer to compute its value
 *
 * Return: 0 for success always
 */
int _abs(int n)
{
	if (n > -1)
		return (n);
	else
		return (-1 * n);
}
