#include "main.h"
/**
 * puts2 - prints every other character of string,
 * starting from the very first character
 * @str: The string in consideration
 * Return: Success (0).
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
