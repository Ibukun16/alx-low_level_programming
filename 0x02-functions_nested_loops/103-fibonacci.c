#include <stdio.h>
/**
 * main - Entry point to a function that prints fibonacci sequence
 *
 * Description: A function that prints the even value terms of a fibonacci seq.
 *
 * Return: 0 for successful execution.
 */
int main(void)
{
	unsigned long int n1 = 0, n2 = 1, next = 0, sum = 0;

	while (next <= 4000000)
	{
		next = n1 + n2;
		n1 = n2;
		n2 = next;

		if (next % 2 == 0)
			sum += next;
	}

	printf("%lu\n", sum)
	return (0);
}
