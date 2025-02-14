#include <stdio.h>
#include <stdlib.h>
/**
 * fibonacci - Print the a fibonacci sequence
 * @val: The value to evaluate
 * Return: Return success(0).
 */

int fibonacci(unsigned long int val)
{
	unsigned long int count, overfl = 0;
	unsigned long int n1 = 1, n2 = 0, next1 = 2, next2 = 0;

	printf("%lu, %lu", n1, next1);
	for (count = 3; count <= val; count++)
	{
		next1 += n1 + overfl;

		if (next1 > 999999999)
		{
			overfl = 1;
			next1 %= 1000000000;
		}

		next2 += n2 + overfl;

		if (next2 > 999999999)
		{
			overfl = 1;
			next2 %= 1000000000;
		}

		if (next2 > 0)
			printf(", %lu%09lu", next2, next1);
		else
			printf(", %lu", next1);

		n1 = next1 - n1;
		n2 = next2 - n2;
	}
	printf("\n");
	return (0);
}
