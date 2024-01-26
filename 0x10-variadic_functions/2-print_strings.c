#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - A variadic function that prints strings.
 * @separator: The string that contain the separator.
 * @n: The number of strings passed into it.
 *
 * Return: Return the string passed to the command line.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	char *strn;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		strn = va_arg(arg, char *);
		if (strn)
			printf("%s", strn);
		else
			printf("(nil)");

		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
