#include "main.h"
/**
 * _pow_recursion - A function that returns the value of integer x raised
 * to power of y.
 * @x: the base number
 * @y: the power integer
 *
 * Return: Value of x raise to power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
