#include <stdio.h>
#include <stdlib.h>
/**
 * main - Print the first 98 fibonacci sequence
 * Return: Return success(0).
 */

int main(void)
{
	long int c, m, n, sum, dm, rm, dn, rn;
	long int pd, pr;

	sum = 0;
	m = 0;
	n = 1;
	for (c = 1; c < 91; c++)
	{
		sum = m + n;
		printf("%ld", sum);
		if (c != 97)
			printf(", ");
		m = n;
		n = sum;
	}
	dm = m / 1000000000;
	rm = m % 1000000000;
	dn = n / 1000000000;
	rn = n % 1000000000;
	while (c < 98)
	{
		pd = dm + dn;
		pr = rm + rn;
		if (pr >= 1000000000)
		{
			pr %= 1000000000;
			pd++;
		}
		if (c == 97)
			break;
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
