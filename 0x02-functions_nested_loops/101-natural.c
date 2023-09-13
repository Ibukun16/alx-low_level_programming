#include <stdio.h>
/**
 * main - list of all natural numbers below 1024
 * that are multiples of 3 and 5 but exclude 1024 itself
 * Return: Return multiples of 3 and 5.
 */
int main(void)
{
	int 1, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}

	printf("%d\n", sum);
	return (0);
}
