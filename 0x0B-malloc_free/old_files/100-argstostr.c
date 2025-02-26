#include "main.h"
#include <stdlib.h>

/**
 * argstostr - A function that concatenates all argument provided for it
 * @ac: The count of the number of argument
 * @av: The pointer to the array containing the arguments
 *
 * Return: A pointer to an array having the concatenated strins or
 * NULL for fail.
 */
char *argstostr(int ac, char **av)
{
	int a, b, c = 0, sz = 0;
	char *arg;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; sz++, a++)
		for (b = 0; av[a][b]; sz++, b++)
			;
	arg = malloc((sizeof(char) * sz) + 1);

	if (arg == NULL)
		return (NULL);

	for (a = 0; a < ac; c++, a++)
	{
		for (b = 0; av[a][b]; b++, c++)
			arg[c] = av[a][b];
		arg[c] = '\n';
	}
	arg[c] = '\0';
	return (arg);
}
