#include <stdio.h>
#include <stdlib.h>
/**
 * main - Print the first 98 fibonacci sequence
 * Return: Return success(0).
 */

int main(void)
{
	int counter = 3;

	float m = 1;
	float n = m + 1;
	float sum = m + n;

	printf("%.0f, ", m);
	printf("%.0f, ", n);
	while (counter <= 98)
	{
		printf("%.0f, ", sum);
		m = n;
		n = sum;
		sum = m + n;
		counter++;
	}
	printf("\n");
	return (0);
}
