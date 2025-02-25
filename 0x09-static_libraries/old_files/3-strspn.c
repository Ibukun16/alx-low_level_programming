#include "main.h"
/**
 * _strspn - A function that get the length of a prefix substring
 * @s: First segment of string
 * @accept: Second segment of string
 *
 * Return: The number of bytes in the initial segment of s.
 */
unsigned int _strspn(char *s, char *accept)
{
	int x, y, p, pl;

	p = 0;
	x = 0;
	while (s[x] != '\0')
	{
		pl = 0;
		y = 0;
		while (accept[y] != '\0')
		{
			if (s[x] == accept[y])
			{
				p++;
				pl = 1;
			}
			y++;
		}
		if (pl == 0)
		{
			return (p);
		}
		x++;
	}
	return (0);
}
