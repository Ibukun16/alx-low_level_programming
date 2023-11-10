#include "variadic_functions.h"
#include <stdlib.h>
/**
 * sum_them_all - A function that returns the sum of all
 * its parameters.
 * @n: The number of argument parameters to sum
 *
 * Return: The sum of the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int result = 0;
	va_list list;

	va_start(list, n);
	i = 0;
	while (i < n)
	{
		result += va_arg(list, int);
		i++;
	}
	va_end(list);

	return (result);
}
