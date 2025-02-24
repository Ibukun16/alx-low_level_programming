#include "main.h"
#include <stdio.h>

/**
 * is_palindrome - A function that determines if a string is palindrome
 * @s: Pointer to the string to check
 *
 * Return: 1 if string is palindrome, else 0.
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s) - 1;

	return (check_palindrome(s, 0, len));
}

/**
 * _strlen_recursion - Function that determines the length of the given
 * string.
 * @s: The string variable
 *
 * Return: The string length.
 */
int _strlen_recursion(char *s)
{
	return (*s == '\0' ? 0 : 1 + _strlen_recursion(s + 1));
}

/**
 * check_palindrome - A function that checks for palindrome in a string
 * @str: The string to check for palindrome
 * @start: The count of the string from 0
 * @end: The backward count of the string from the end
 *
 * Return: 0 for non-palindrome and 1 for palindrome.
 */
int check_palindrome(char *str, int start, int end)
{
	if (start >= end)
		return (1);
	if (*(str + start) != *(str + end))
		return (0);
	return (check_palindrome(str, start + 1, end - 1));
}
