#include "main.h"
#include <stdio.h>

/**
 * set_string - A function that set the value of a pointer to a char
 * @s: Double pointer to the original string variable
 * @to: Pointer to the destination character variable
 *
 * Return: void.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
