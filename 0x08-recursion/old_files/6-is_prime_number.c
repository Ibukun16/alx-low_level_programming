#include "main.h"
/**
 * is_prime_number - A function that determines if a number
 * is a prime number
 * @n: The number to determine its status
 *
 * Return: 1 for prime number, 0 for non-prime number.
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (check_if_prime(n, 2));
}

/**
 * check_if_prime - A function that checks for prime number.
 * @i: The number to check its status.
 * @d: The divisor.
 *
 * Return: 0 for non prime number and 1 for prime number.
 */
int check_if_prime(int i, int d)
{
	if (d > i / 2)
		return (1);
	if ((d == 2 || d == 3 || d == 5) && i % d == 0)
		return (0);
	return (check_if_prime(i, d + 1));
}
