#include "main.h"
/**
 * rev_string - reverse a string
 * @s: The string to be reversed
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int l = 0;
	int i, h;
	char tmp;

	while (s[l] != '\0')
	{
		l++;
	}
	i = l - 1;
	h = 0;

	while (h < l / 2)
	{
		tmp = s[h];
		s[h] = s[i];
		s[i--] = tmp;
		h++;
	}
}
