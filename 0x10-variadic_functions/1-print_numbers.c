#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - A function that prints numbers, followed by a new line.
 * @separator: Pointer to the string variable holding the numbers separator
 * @n: The count of the numbers to print.
 *
 * Return: 0 for successful execution, else 1.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int count;

	va_start(list, n);
	for (count = 0; count < n; count++)
	{
		printf("%d", va_arg(list, int));
		if (count != (n - 1) && separator)
			printf("%s", separator);
	}
	va_end(list);
	printf("\n");
}
