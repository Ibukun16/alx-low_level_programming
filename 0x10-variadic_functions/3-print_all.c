#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - a function that prints character
 * @list: the argument to print
 * Return: void
 */

void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_string - a function that prints string
 * @list: the argument to print
 * Return: void
 */

void print_string(va_list list)
{
	char *s;

	s = va_arg(list, char*);
	if (s == NULL)
		s = "(nil)";
printf("%s", s);
}

/**
 * print_integer - a function that prints integer
 * @list: the argument to print
 * Return: void
 */
void print_integer(va_list list)
{
	printf("%i", va_arg(list, int));
}

/**
 * print_float - a function that prints float
 * @list: the argument to print
 * Return: void
 */
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_all - a function that prints anything
 * @format: list of all types of arguments paased
 * to the function
 *
 * Return:void
 */

void print_all(const char * const format, ...)
{
	unsigned int i, j;
	t_print t[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_integer},
		{"f", print_float},
		{NULL, NULL}
	};
	va_list valist;
	char *s = "";

	va_start(valist, format);

	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (t[j].x != NULL)
		{
			if (*(t[j].x) == format[i])
			{
				printf("%s", s);
				t[j].T_func(valist);
				s = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(valist);
	printf("\n");
}
