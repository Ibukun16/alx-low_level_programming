#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * positive_or_negative - A rogram that print status of a number
 * @n: The number to find its status
 * Description: A function that prints random positive or negative numbers
 *
 * Return: void.
 */
void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
}
