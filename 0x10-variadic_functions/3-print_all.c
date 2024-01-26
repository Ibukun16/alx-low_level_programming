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
	int i, j;
	char *strn;
	char *separator = ", ";

	va_start(varg, format);

	i = 0, j = 0;
	while (format && format[i])
		i++;
	while (format && format[j])
	{
		if (j == (i - 1))
			separator = "";
		switch (format[j])
		{
			case 'c':
				printf("%c%s", va_arg(varg, int), separator);
				break;
			case 'i':
				printf("%d%s", va_arg(varg, int), separator);
				break;
			case 'f':
				printf("%f%s", va_arg(varg, double), separator);
				break;
			case 's':
				strn = va_arg(varg, char *);
				if (strn)
					printf("%s%s", strn, separator);
				else
					printf("(nil)");
				break;
		}
		j++;
	}
	printf("\n");
	va_end(varg);
}
