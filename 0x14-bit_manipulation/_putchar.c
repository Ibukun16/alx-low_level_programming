#include "main.h"
/**
 * _putchar - A function that prints character to standard output
 * @c: The character to print
 *
 * Return: On success -1.
 * On error, -1 is returned, and erno is set apprpriately.
 */
int _purchar(char c)
{
	return (write(1, &c, 1));
}
