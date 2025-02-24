#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - A function that returns the value of x raised
 * to the power of y.
 * @x: The number variable to be raised.
 * @y: The number variable that represent the power
 *
 * Return: The value of x raised to the power of y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
