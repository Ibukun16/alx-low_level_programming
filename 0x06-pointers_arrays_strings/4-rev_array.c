#include "main.h"
/**
 * reverse_array - reverses the content of an array
 * @a: The array in focus
 * @n: number of elements in the array
 *
 * Return: The array after reversal
 */
void reverse_array(int *a, int n)
{
	int e = 0, b, ph;

	b = n - 1;

	while (e < n / 2)
	{
		ph = a[e];
		a[e] = a[b];
		a[b--] = ph;
		e++;
	}
}

