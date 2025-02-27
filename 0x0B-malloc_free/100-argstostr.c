#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - A function that concatenate all the arguments of a program
 * @ac: Integer variable that represent the count of the arguments
 * @av: The variable array of the command line argument
 *
 * Return: Pointer to the new string, else NULL
 */
char *argstostr(int ac, char **av)
{
	char *arg_arr;
	int count, len, n = 0, size = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (count = 0; count < ac; count++, size++)
		for (len = 0; av[count][len] != '\0'; len++)
			size++;

	arg_arr = malloc(sizeof(char) * (size + 1));

	if (arg_arr == NULL)
		return (NULL);

	for (count = 0; count < ac; count++, n++)
	{
		for (len = 0; av[count][len]; len++, n++)
			*(arg_arr + n) = *(*(av + count) + len);
		*(arg_arr + n) = '\n';
	}
	*(arg_arr + n) = '\0';
	return (arg_arr);
}

