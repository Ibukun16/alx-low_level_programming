#include <stdio.h>
#include <stdlib.h>
/**
 * main - Print out the fibonacci sequence of even values
 * up to 4000000
 * Return: Always 0 (success).
 */
int main(void)
{
	unsigned long int fibo, i, j, sum;

	sum = 0;
	i = 0;
	j = 1;
	fibo = 0;

	while (sum < 4000000)
	{
		sum = i + j;
		if (sum % 2 == 0)
		{
			fibo += sum;
		}
		i = j;
		j = sum;
	}
	printf("%ld\n", fibo);
	return (0);
}
