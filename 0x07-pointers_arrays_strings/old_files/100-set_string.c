#include "main.h"
/**
 * set_string - A function that set the value of a pointer to a character
 * @s: The string to set its value
 * @to: The character to set the string value to
 *
 * Return: void.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
