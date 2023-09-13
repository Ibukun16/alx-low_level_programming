#include "main.h"

/**
 * _abs - Absolute value of an integer
 * @n: the integer to be computed
 *
 * Description: The programme determine the value of a number
 * without considering its sign
 * Return: Always 0 (success)
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
