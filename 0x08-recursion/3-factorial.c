#include "main.h"
/**
 * factorial - a function that finds the factorial of a number
 * @n: The number to find its factorial
 *
 * Return: The factorial of a given number.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
