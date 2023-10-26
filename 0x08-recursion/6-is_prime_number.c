#include "main.h"
/**
 * find_prime - A function that finds prime numbers
 * @p: the prime number
 * @d: the divisor
 *
 * Return: Prime number.
 */
int find_prime(int p, int d)
{
	if (p == d)
		return (1);
	if (p % d == 0)
		return (0);
	else
		return (find_prime(p, d + 1));
}

/**
 * is_prime_number - A function that prints the prime number p
 * @n: The prime number
 *
 * Return: Prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (find_prime(n, 2));
}
