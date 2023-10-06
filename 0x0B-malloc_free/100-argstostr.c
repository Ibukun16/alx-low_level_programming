#include "main.h"
#include <stdlib.h>
/**
 * *argstostr - a function that concatenate all the arguments of my program
 * @ac: count of the argument
 * @av: The vectr of the argument
 *
 * Return: a pointer to the contenated arguments
 */
char *argstostr(int ac, char **av)
{
	int x, y, z, size;
	char *p;

	size = 0;
	z = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	x = 0;
	while (x < ac)
	{
		y = 0;
		while (av[x][y])
		{
			size++;
			y++;
		}
		size++;
		x++;
	}
	p = (char *)malloc((sizeof(char) * size) + 1);
	if (p == NULL)
		return (NULL);
	x = 0;
	while (x < ac)
	{
		y = 0;
		while (av[x][y])
		{
			p[z] = av[x][y];
			y++;
			z++;
		}
		p[z] = '\n';
		z++;
		x++;
	}
	p[z] = '\0';
	return (p);
}
