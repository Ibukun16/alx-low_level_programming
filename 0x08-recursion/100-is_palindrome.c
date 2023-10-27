#include "main.h"
/**
 * find_strlen - A function that returns the length of a string
 * @s: the string we are to find its length
 *
 * Return:length of the string
 */
int find_strlen(char *s)
{
	if (*s)
		return (1 + find_strlen(s + 1));
	return (0);
}

/**
 * check_pal - A function that searches a string and
 * determines if it is palindrome
 * @s: The string to search for palindrome
 * @i: iterator
 * @l: length of string
 *
 * Return: 0 for success
 */
int check_pal(char *s, int i, int l)
{
	if (*(s + i) != *(s + l - 1))
		return (0);
	if (i >= l)
		return (1);
	else
		return (check_pal(s, ++i, --l));
}

/**
 * is_palindrome - A function that value for palindrome
 * @s: The string to check for palindrome
 *
 * Return: 0 for success and 1 for failure.
 */
int is_palindrome(char *s)
{
	int l = 0;

	if (*s)
	{
		l = find_strlen(s);
		return (check_pal(s, 0, l));
	}
	else
		return (1);
}
