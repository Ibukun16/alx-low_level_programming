#include "main.h"

/**
 * str_len - returns the length of a string
 * @s: string whose length to calculate
 * @l: length of the string
 *
 * Return: length of the string
 */
int len_str(char *s, int l)
{
	if (*s == '\0')
	{
		return (l - 1);
	}
	return (len_str(s + 1, l + 1));
}

/**
 * check_for_pal - checks the characters recursively for palindrome
 * @s: string to check
 * @l: length of the string
 *
 * Return: 1 if palindrome or 0 if not
 */
int check_for_pal(char *s, int l)
{
	if (*s != *(s + l))
	{
		return (0);
	}
	else if (*s == 0)
	{
		return (1);
	}
	return (check_for_pal(s + 1, l - 2));
}

/**
 * is_palindrome - a function that checks a string if it is palindrome
 * @s: the string to check
 *
 * Return: 1 if palindrome or 0 if not
 */
int is_palindrome(char *s)
{
	int l;

	l = len_str(s, 0);
	return (check_for_pal(s, l));
}
