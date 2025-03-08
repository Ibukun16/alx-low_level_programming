#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - A function that print strings
 * @separator: Pointer to the variable that holds the separator
 * @n: The integer variable of the number of string arguments
 *
 * Return: void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int count;
	va_list arg;
	char *str;

	va_start(arg, n);
	for (count = 0; count < n; count++)
	{
		str = va_arg(arg, char *);
		printf("%s", str == NULL ? "(nil)" : str);
		if (count < (n - 1) && separator)
			printf("%s", separator);
	}
	va_end(arg);
	printf("\n");
}
