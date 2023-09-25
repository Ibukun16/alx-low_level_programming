#include "main.h"
#include <stdio.h>
/**
 * *_strstr - A function that locate a substring
 * @haystack: The main string that contain the substring
 * @needle: The substring to be searched in the mainstring
 *
 * Return: a pointer to the beggining of substring found
 * or NULL if no substring is found.
 */
char *_strstr(char *haystack, char *needle)
{
	int r = 0, s;

	while (haystack[r] != '\0')
	{
		s = 0;
		while (needle[s] != '\0')
		{
			if (haystack[r + s] != needle[s])
				break;
			s++;
		}
		if (needle[s] == '\0')
			return (haystack + r);
		r++;
	}
	return (NULL);
}
