#include <unistd.h>

/**
 * _putchar - mimic the putchar function aand write c to stdout
 * @c: The character to print
 *
 * Return: 0 for successful execution
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
