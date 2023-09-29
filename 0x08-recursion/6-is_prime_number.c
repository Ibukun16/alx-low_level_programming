#include "main.h"

int prime(int n, int i);

/**
 * is_prime_number - a function that return a prime number
 * @n: The number to evaluate
 *
 * Return: 1 if n is a prime number or 0 if it ia not
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime(n, n - 1));
}

/**
 * prime - Determine if a number is prime by recursion
 * @n: number to evaluate
 * @i: iteration
 *
 * Return: 1 if prime and 0 if not
 */
int prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (prime(n, i - 1));
}
