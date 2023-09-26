#include <stdio.h>
#include <stdlib.h>
/**
 * main - Print the first 98 fibonacci sequence
 * Return: Return success(0).
 */

int main(void)
{
	int c;
	unsigned long int m, n, sum, dm, rm, dn, rn;
	unsigned long int pd, pr;

	m = 0;
	n = 1;
	sum = 0;
	for (c = 0; c < 92; c++)
	{
		sum = m + n;
		printf("%lu, ", sum);

		m = n;
		n = sum;
	}
	dm = m / 10000000000;
	rm = m % 10000000000;
	dn = n / 10000000000;
	rn = n % 10000000000;

	c = 93;
	while (c < 99)
	{
		pd = dm + dn;
		pr = rm + rn;
		if (pr > 9999999999)
		{
			pd += 1;
			pr %= 1000000000;
		}

		printf("%lu%lu", pd, pr);
		if (count != 98)
			printf(", ");

		dm = dn;
		rm = rn;
		dn = pd;
		rn = pr;
		c++;
	}
	printf("\n");
	return (0);
}
