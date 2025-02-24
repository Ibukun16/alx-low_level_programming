#include "main.h"
/**
 * _sqrt_recursion - A function that finds the square root of a number
 * by recursion.
 * @n: The number we want its square root.
 *
 * Return: The natural square root of n or -1 for error.
 */
int _sqrt_recursion(int n)
{
	if (n == -n)
		return (-1);
	if (n == 0)
		return (0);
	return (find_sqrt(1, n));
}

/**
 * find_sqrt - A function that checks for square of a number n.
 * @r: The square root.
 * @q: The number to check for its square root.
 *
 * Return: The square root.
 */
int find_sqrt(int r, int q)
{
	if (r * r > q)
		return (-1);
	if (r * r < q)
		return (find_sqrt(r + 1, q));
	return (r);
}
