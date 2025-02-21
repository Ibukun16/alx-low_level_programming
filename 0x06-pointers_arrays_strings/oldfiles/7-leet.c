#include "main.h"
/**
 * leet - A function that encode astring into 1337
 * @s: The string in focus
 *
 * Return: The outcome of success.
 */
char *leet(char *s)
{
	int l, m, n;
	char p[] = "oOlLeEaAtT";
	char q[] = "0011334477";

	l = 0;
	while (s[l] != '\0')
	{
		m = 0;
		n = 0;
		while (p[m] != '\0')
		{
			if (s[l] == p[m])
			{
				n = m;
				s[l] = q[n];
			}
			m++;
		}
		l++;
	}
	return (s);
}


