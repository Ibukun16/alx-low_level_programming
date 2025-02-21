#include "main.h"
/**
 * *string_toupper - A function that changes all lower case
 * letters to upper case letters
 * @s: the string in focus
 *
 * Return: Only success.
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
