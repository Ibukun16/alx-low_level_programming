#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - Function that returns the natural square root of a number
 * @n: The integer variable
 *
 * Return: The natural square root of n, else -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);

	return (_sqrt_calculator(n, 1));
}

/**
 * _sqrt_calculator - A helper function to calculate square root of n.
 * @n: The integer variable to find its suare root
 * @r: The initial guess root
 *
 * Return: root.
 */
int _sqrt_calculator(int n, int r)
{
	if (r * r > n)
		return (-1);
	return (r * r < n ? _sqrt_calculator(n, r + 1) : r);
}
