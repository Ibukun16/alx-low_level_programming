#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - a function that prints strings followed by
 * a new line
 * @separator: Separator between lines
 * @n: Number of arguments
 *
 * Return: Void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *s;
	va_list list;
	unsigned int i;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(list, char *);
		if (s)
			printf("%s", s);
		else
			printf("(nil)");
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	va_end(list);
	printf("\n");
}
