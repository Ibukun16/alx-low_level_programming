#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *argstostr - A function that concatenate all arguments
 * of a program
 * @ac: argument count
 * @av: array of the argument
 *
 * Return: The concatenated argument
 */
char *argstostr(int ac, char **av)
{
	int i, j, a, b, len = 0, siz = 0;
	char *arg;

	if (ac == 0 || av == NULL)
	return (NULL);

	for (i = 0; (i < ac); i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			len++;
			len++;
		}
	}
	arg = malloc((sizeof(char) * len) + 1);
	if (arg == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			arg[siz] = av[a][b];
			siz++;
		}
		arg[siz++] = '\n';
	}
	arg[siz] = '\0';
	return (arg);
}
