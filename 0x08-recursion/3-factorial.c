#include "main.h"
/**
 * factorial - A function that returns the factorial
 * of a given number.
 * @n: The number to find its factorial
 *
 * Return: factorial of a number.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
