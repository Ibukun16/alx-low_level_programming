#include "main.h"
#include <stdlib.h>
/**
 * char *_strdup -  function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 * @str: the string to be copied
 *
 * Return: pointer to newly allocated memory
 */
char *_strdup(char *str)
{
	char *cp;
	unsigned int i, l;

	i = 0;
	l = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[l])
	{
		l++;
	}

	cp = (char *)malloc((sizeof(char) * l) + 1);

	if (cp == NULL)
	{
		return (NULL);
	}
	while ((cp[i] = str[i]) != '\0')
	{
		i++;
	}
	return (cp);
}
