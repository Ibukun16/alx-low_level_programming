#include <stdio.h>
#include <stdlib.h>
/**
 * fibonacci - Print the a fibonacci sequence
 * @val: The value to evaluate
 * Return: Return success(0).
 */

int fibonacci(long unsigned int val)
{
	unsigned long int count, overfl = 0, tmp1, tmp2;
	unsigned long int n1 = 1, n2 = 0, next1 = 2, next2 = 0;

	printf("%lu, %lu", n1, next1);
	for (count = 3; count <= val; count++)
	{
		n1 += next1 + overfl;

		if (n1 > 999999999)
		{
			overfl = 1;
			n1 %= 1000000000;
		}

		n2 += next2 + overfl;

		if (n2 > 999999999)
		{
			overfl = 1;
			n2 %= 1000000000;
		}

		if (n2 > 0)
			printf(", %lu%09lu", n2, n1);
		else
			printf(", %lu", n1);

		tmp1 = next1;
		next1 = n1;
		n1 = tmp1;

		tmp2 = next2;
		next2 = n2;
		n2 = tmp2;
	}
	printf("\n");
	return (0);
}
