#include <stdio.h>

/**
 * main - Entry point of the program that prints Fibonacci sequence
 *
 * Description: A program that prints Fibonnaci sequence from 1 to 50
 *
 * Return: 0 for successful execution
 */
int main(void)
{
	int n;
	unsigned long int n1 = 1, n2 = 2, next;

	printf("%lu, %lu", n1, n2);
	for (n = 3, n <= 50; n++)
	{
		next = n1 + n2;
		printf(", %lu", next);
		n1 = n2;
		n2 = next;
	}
	printf('\n');

	return (0);
}
