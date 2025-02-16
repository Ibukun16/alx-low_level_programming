#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the largest prime factor of 612852475143
 * and terminate to a new line.
 * Return: Always succesful (0).
 */
int main(void)
{
	long int n, p;

	n = 612852475143;

	while (p < (n / 2))
	{
		if (n % 2 == 0)
		{
			n /= 2;
			continue;
		}
		for (p = 3; p < (n / 2); p += 2)
		{
			if (n % p == 0)
				n /= p;
		}
	}
	printf("%ld\n", n);

	return (0);
}
