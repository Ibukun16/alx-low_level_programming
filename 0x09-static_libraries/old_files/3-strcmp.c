#include "main.h"
/**
 * _strcmp - a function that compares 2 strings
 * @s1: string to compare
 * @s2: string to be compared with
 *
 * Return: less tha 0 if s1 is less than s2, 0 if s1 equals s2,
 * and more than 0 if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
