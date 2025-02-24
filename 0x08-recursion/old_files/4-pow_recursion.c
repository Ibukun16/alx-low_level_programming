#include "main.h"
/**
 * _pow_recursion - A function that find the value of x raise to power y
 * by recursion.
 * @x: The number we want to find its value.
 * @y: The power of the number x.
 *
 * Return: 0 for success and -1 for errror.
 */
int _pow_recursion(int x, int y)
{
	int p;

	if (x == 0)
		return (0);
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	p = x * _pow_recursion(x, y - 1);
	return (p);
}
