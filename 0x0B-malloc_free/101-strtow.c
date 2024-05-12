
#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * **strtow - A function that splits string into words
 * @str: The string to be splited
 *
 * Return: Pointer to an array of  words, or NULL for failure
 */
char **strtow(char *str)
{
	int x, y, z, i = 0, words = 0, count = 0;
	char **mem;

	if (str == NULL || *str == '\0')
		return (NULL);
	words = count_words(str);
	if (words <= 1)
		return (NULL);
	mem = (char **)malloc(sizeof(char *) * (words + 1));
	if (mem == NULL)
		return (NULL);
	mem[words - 1] = NULL;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (x = 1; str[i + x] && str[i + x] != ' '; x++)
				;
			x++;
			mem[count] = (char *)malloc(sizeof(char) * (x + 1));
			x--;
			if (mem[count] == NULL)
			{
				for (z = 0; z < count; z++)
					free(mem[z]);
				free(mem[words - 1]);
				free(mem);
				return (NULL);
			}
			for (y = 0; y < x; y++)
				mem[count][y] = str[i + y];
			mem[count][y] = '\0';
			count++;
			i += x;
		}
		else
			i++;
	}
	return (mem);
}

/**
 * count_words - A function that count the words in a string
 *		and return an integer value.
 * @s: String to count
 *
 * Return: The number of words counted
 */
int count_words(char *s)
{
	int n, m = 0;

	for (n = 0; s[n]; n++)
	{
		if (s[n] == ' ')
		{
			if (s[n + 1] != ' ' && s[n + 1] != '\0')
				m++;
		}
		else if (n == 0)
			m++;
	}
	m++;
	return (m);
}
