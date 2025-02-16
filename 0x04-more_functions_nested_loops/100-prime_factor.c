#include <stdio.h>
#include <math.h>

/**
 * main - Entry to the function that prints the maximum prime factor
 * Return: void.
 */
int main(void)
{
	long int n = 612852475143, max = 0, prime;

	while (n % 2 == 0)
	{
		max = 2;
		n /= 2;
	}

	for (prime = 3; prime <= sqrt(n); prime += 2)
	{
		if (n % prime == 0)
			n /= prime;
	}
	if (n > 2)
		max = n;

	printf("%ld\n", max);
	return (0);
}

