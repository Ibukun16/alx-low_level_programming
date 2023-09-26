#include <stdio.h>
#include <stdlib.h>
/**
 * main - Print the first 98 fibonacci sequence
 * Return: Return success(0).
 */

int main(void)
{
	int c;
	unsigned long int m, n, dm, rm, dn, rn;

	m = 1;
	n = 2;

	printf("%lu", m);
	for (c = 1; c < 91; c++)
	{
		printf(", %lu", n);

		n = n + m;
		m = n - m;
	}
	dm = m / 1000000000;
	rm = m % 1000000000;
	dn = n / 1000000000;
	rn = n % 1000000000;

	c = 92;
	while (c < 99)
	{
		printf(", %lu", dn + (rn / 1000000000));
		printf("%lu", rn % 1000000000);
		dn = dm + dn;
		dm = dn - dm;
		rn = rn + rm;
		rm = rn - rm;
		c++;
	}
	printf("\n");
	return (0);
}
