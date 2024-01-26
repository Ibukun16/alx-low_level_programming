#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - A function that print all argument passed to it.
 * @format: The format of each of the entry on the command line.
 *
 * Return: 0 for success.
 */
void print_all(const char * const format, ...)
{
	va_list varg;
	int i = 0;
	char *strn, *separator = "";

	va_start(varg, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator,  va_arg(varg, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(varg, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(varg, double));
				break;
			case 's':
				strn = va_arg(varg, char *);
				if (!strn)
					strn = "(nil)";
				printf("%s%s", separator, strn);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(varg);
}
