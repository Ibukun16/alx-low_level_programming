#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - A fucntion that returns the sum of all its parameters
 * @n: The number of parameters supplied
 *
 * Return: The sum calculated, else NULL.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int count, sum = 0;
	va_list ap;

	va_start(ap, n);
	for (count = 0; count < n; count++)
		sum += va_arg(ap, int);
	va_end(ap);

	return (sum);
}
