#include "main.h"
#include <stdio.h>

/**
 * puts2 - A function that prints every other character of a string
 * @str: The string variable
 *
 * Return: void.
 */
void puts2(char *str)
{
	int count;

	for (count = 0; str[count] != '\0'; count++)
	{
		if (count % 2 == 0)
			_putchar(str[count]);
	}
	_putchar('\n');
}
