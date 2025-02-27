#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - A function that splits a string into words
 * @str: Pointer to the string variable
 *
 * Return: The splited words, else NULL.
 */
char **strtow(char *str)
{
	char **arr;
	int count, words, word_len, i = 0, n;

	if (str == NULL || *str == '\0')
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);

	arr = (char **)malloc(sizeof(char *) * (words + 1));
	if (arr == NULL)
		return (NULL);

	for (count = 0; count < words; count++)
	{
		while (*(str + i) == ' ')
			i++;

		n = i;
		while (*(str + n) != ' ' && *(str + n) != '\0')
			n++;

		word_len = n - i;
		arr[count] = (char *)malloc(sizeof(char) * (word_len + 1));
		if (*(arr + count) == NULL)
		{
			while (count >= 0)
				free(arr[count--]);
			free(arr);
			return (NULL);
		}
		for (n = 0; n < word_len; n++, i++)
			arr[count][n] = *(str + i);
		arr[count][n] = '\0';
	}
	arr[words] = NULL;
	return (arr);
}

/**
 * count_words - A function that count the number of words in a string
 * @str: The string variable containing the words to count
 *
 * Return: The words counts else NULL.
 */
int count_words(char *str)
{
	int words = 0, in_word = 0;

	while (*str)
	{
		if (*str != ' ' && !in_word)
		{
			in_word = 1;
			words++;
		}
		else if (*str == ' ')
			in_word = 0;
		str++;
	}
	return (words);
}
