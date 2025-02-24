#include "main.h"
/**
 * factorial - A function that find the factorial of a number
 * by recursion.
 * @n: The number whose factorial we desire.
 *
 * Return: 0 for success, -1 for error.
 */
int factorial(int n)
{
	int fac;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	fac = n * factorial(n - 1);
	return (fac);
}
