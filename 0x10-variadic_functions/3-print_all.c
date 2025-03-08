#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - A function that prints anything
 * @format: The format of the variables that are printable.
 *
 * Return: void.
 */
void print_all(const char * const format, ...)
{
	va_list all;
	char *separator = "", *str;
	unsigned int n = 0;

	va_start(all, format);
	while (format && format[n])
	{
		switch (format[n])
		{
			case 'c':
				printf("%s%c", separator, va_arg(all, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(all, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(all, double));
				break;
			case 's':
				str = va_arg(all, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", separator, str);
				break;
			default:
				n++;
				continue;
		}
		separator = ", ";
		n++;
	}
	va_end(all);
	printf("\n");
}
