#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - A function that returns 1 if input integer
 * is a prime number.
 * @n: The integer variable to check
 *
 * Return: 1 for prime number, else 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2 || n == 3)
		return (1);
	if (n % 2 == 0 || n % 3 == 0)
		return (0);
	return (check_prime(n, 5));
}

/**
 * check_prime - A helper function to check for prime number
 * @n: The number to check
 * @d: The divisor.
 *
 * Return: 1 for prime number else 0.
 */
int check_prime(int n, int d)
{
	if (d * d > n)
		return (1);
	if (n % d == 0)
		return (0);
	return (check_prime(n, d + 2));
}
