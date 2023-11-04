#include "main.h"
#include <stdlib.h>
/**
 * word_count - A function that counts the words in a string
 * @s: The string to count its words
 *
 * Return: The number of words in the string
 */
int word_count(char *s)
{
	int i, c = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] && s[i + 1] != ' ')
				c++;
		}
		else if (i == 0)
			c++;
	}
	c++;
	return (c);
}
/**
 * **strtow - A function that split a string into words
 * @str: The string to split
 *
 * Return: The words from the splited string
 */
char **strtow(char *str)
{
	int i, j, x, y, c = 0, temp = 0;
	char **ar;

	if (str == NULL || *str == '\0')
		return (NULL);
	c = word_count(str);
	if (c <= 1)
		return (NULL);
	ar = (char **)malloc(sizeof(char *) * c);
	if (ar == NULL)
		return (NULL);
	ar[c - 1] = NULL;
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			ar[temp] = (char *)malloc(sizeof(char) * j);
			j--;
			if (ar[temp] == NULL)
			{
				for (x = 0; x < temp; x++)
					free(ar[x]);
				free(ar[c - 1]);
				free(ar);
				return (NULL);
			}
			for (y = 0; y < j; y++)
				ar[temp][y] = str[i + y];
			ar[temp][y] = '\0';
			temp++;
			i += j;
		}
	}
	return (ar);
}
