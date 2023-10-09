#include "main.h"
#include <stdlib.h>
/**
 * array_range - A function that print array order of range
 * @min: the minimum value of the range stored
 * @max: the maximum value of the range stored
 *
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *p;
	int dif, x;

	if (min > max)
		return (NULL);

	dif = max - min + 1;
	p = malloc(sizeof(int) * dif);

	if (p == NULL)
		return (NULL);

	for (x = 0; x < dif; x++, min++)
		p[x] = min;

	return (p);
}
