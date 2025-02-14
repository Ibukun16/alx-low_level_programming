#include <stdlib.h>
#include "main.h"

/**
 * main - Print the value of the random number n
 * more header
 * betty function
 * Return: Always 0 (success)
 */
void positive_or_negative(int i)
{

	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
