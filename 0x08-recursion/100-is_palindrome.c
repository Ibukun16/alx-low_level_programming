#include "main.h"
/**
 * is_palindrome - A function that confirms that a string is palindrome.
 * @s: The string to check
 *
 * Return: 0 for non-palindrome and 1 for palindrome.
 */
int is_palindrome(char *s)
{
	int l;

	l = strlen_recursion(s) - 1;
	return (check_for_pal(0, l, s));
}
/**
 * check_for_pal - A function that checks for palindrome in a string.
 * @s: The string to check for palindrome.
 * @i: integer that indicate count of a string from biginning.
 * @l: integer that indicate count of a string backward from the end.
 *
 * Return: 0 for non-palindrome and 1 for palindrome
 */
int check_for_pal(int i, int l, char *s)
{
	if (i >= l)
		return (1);
	if (s[i] != s[l])
		return (0);
	return (check_for_pal(i + 1, l - 1, s));
}
/**
 * strlen_recursion - A function that determine the length of a give string.
 * @str: The string to determine its length
 *
 * Return: Length of the string.
 */
int strlen_recursion(char *str)
{
	int l = 0;

	if (*str)
	{
		l++;
		l += strlen_recursion(str + 1);
	}
	return (l);
}
