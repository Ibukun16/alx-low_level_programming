#include "main.h"

/**
 * _atoi - convert a string into an integer.
 * @s: the string to be converted
 *
 * Return: Always succesful.
 */
int _atoi(char *s)
{
	int p = 1, i = 0;
	unsigned int u = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			p *= -1;
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		u = (u * 10) + (s[i] - '0');
		i++;
	}
	u *= p;
	return (u);
}

