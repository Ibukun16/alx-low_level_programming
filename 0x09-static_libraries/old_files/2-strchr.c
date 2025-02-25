#include "main.h"
/**
 * *_strchr - A function that locate a character in string
 * @s: The string that  contains the character
 * @c: The character we are seeking to locate
 *
 * Return: s which is a pointer to c
 */
char *_strchr(char *s, char c)
{
	int i = 0, j;

	while (s[i])
	{
		i++;
	}

	j = 0;
	while (j <= i)
	{
		if (c == s[j])
		{
			s += j;
			return (s);
		}
		j++;
	}
	return ('\0');
}
