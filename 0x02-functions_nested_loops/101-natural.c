#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the function that compute multiples of natural num
 *
 * Return: Result of computation
 */
int main(void)
{
	int n, sum = 0;

	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
			sum += n;
	}
	printf("%d\n", sum);  
	return (0);
}
