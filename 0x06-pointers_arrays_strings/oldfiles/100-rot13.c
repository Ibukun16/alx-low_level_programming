#include "main.h"
/**
 * *rot13 - Function that encodes a string using rot13.
 * @s: the string to encode
 *
 * Return: The encoded result.
 */
char *rot13(char *s)
{
	int i = 0, j;

	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i] != '\0')
	{
		j = 0;

		while (a[j] != '\0')
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
