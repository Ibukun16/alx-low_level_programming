#include "main.h"
#include <stdlib.h>
/**
 * word_count - a function that counts the number of strings in word
 * @strn: string in focus
 *
 * Return: Number of words in a string
 */
int word_count(char *strn)
{
	int f, c, n;

	f = 0;
	c = 0;
	n = 0;

	while (strn[c] != '\0')
	{
		if (strn[c] == ' ')
		{
			f = 0;
		}
		else if (f == 0)
		{
			f = 1;
			n++;
		}
		c++;
	}
	return (n);
}

/**
 * **strtow - A function that split worrds in a string
 * @str: the string to split
 *
 * Return: a pointer to an array of strings
 */
char **strtow(char *str)
{
	char **m, *ph;
	int i, x = 0, l = 0, w, c = 0, strt, end;

	while (*(str + l))
		l++;
	w = word_count(str);
	if (w == 0)
		return (NULL);
	m = (char **)malloc(sizeof(char *) * (w + 1));
	if (m == NULL)
		return (NULL);

	for (i = 0; i <= l; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				ph = (char *)malloc(sizeof(char) * (c + 1));
				if (ph == NULL)
					return (NULL);
				while (strt < end)
					*ph++ = str[strt++];
				*ph = '\0';
				m[x] = ph - c;
				x++;
				c = 0;
			}
		}
		else if (c++ == 0)
			strt = i;
	}
	m[x] = NULL;
	return (m);
}
