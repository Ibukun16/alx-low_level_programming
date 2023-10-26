#include "main.h"
/**
 * find_root - A function that find the root of n by iteration
 * @n: The integer whose root we are to find
 * @r: The iteration value to determine the root of n
 *
 * Return: The root of integer n.
 */
int find_root(int n, int r)
{
	if (r * r > n)
		return (-1);
	if (r * r == n)
		return (r);
	else
		return (find_root(n, r + 1));
}

/**
 * _sqrt_recursion - A function that call on another function to find
 * the root of an integer n.
 * @n the integer whose root we are to find
 *
 * Return: The natural root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (find_root(n, 0));
}
