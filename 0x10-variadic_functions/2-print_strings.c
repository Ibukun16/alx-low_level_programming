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
	va_list list;
	unsigned int i;

	va_start(list, n);


