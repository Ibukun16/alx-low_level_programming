#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/**
 * main - Entry point to the function that generate random valid password
 *
 * Return: 0 for successful execution.
 */
int main(void)
{
	int count, upper, range = 90, cum_sum = 0, lower = '!';
	const int target_sum = 2772;

	srand(time(0));
	upper = range + lower;

	for (cum_sum = 0; cum_sum < target_sum - upper; cum_sum += count)
	{
		count = lower + (int)(((double)rand() / RAND_MAX) * range);
		putchar(count);
	}

	if (cum_sum != target_sum)
		putchar(target_sum - cum_sum);
	putchar('\n');
	return (0);
}
