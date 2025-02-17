#include "main.h"
/**
 * puts_half - prints half of a string and terminate on a new line
 * @str: The string in focus
 *
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int l = 0;
	int m, n;

	while (str[l] != '\0')
	{
		l++;
	}
	m = (l - 1) / 2;
	n = m + 1;
	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
