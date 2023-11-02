#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - A function that duplicates string
 * @str: The duplicated string
 *
 * Return: A pointer to the memory space containing the duplicated
 * string
 */
char *_strdup(char *str)
{
	int i = 0, l = 1;
	char *sdup;

	if (str == NULL)
		return (NULL);

	while (str[l])
		l++;

	sdup = malloc((sizeof(char) * l) + 1);

	if (sdup == NULL)
		return (NULL);

	while (i < l)
	{
		sdup[i] = str[i];
		i++;
	}
	sdup[l] = '\0';
	return (sdup);
}

