#include "main.h"
#include <stdio.h>

/**
 * rev_string -  function that reverses a sting in the system memory.
 * @s: The string variable
 *
 * Return: void.
 */
void rev_string(char *s)
{
	int count = 0, tmp, len, idx;

	while (s[count] != '\0')
		count++;

	len = count - 1;

	for (idx = len; idx > (len / 2); idx--)
	{
		tmp = s[len - idx];
		s[len - idx] = s[idx];
		s[idx] = tmp;
	}
}
