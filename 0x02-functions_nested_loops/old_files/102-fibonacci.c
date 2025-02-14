#include <stdio.h>
/**
 * main - Print fibonacci of first 50 numbers
 * Description: A code that print fibonacci of numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	long int f, i, j, add;

	add = 0;
	f = 0;
	i = 0;
	j = 1;
	while (f < 50)
	{
		add = i + j;
		printf("%ld", add);
		if (f != 49)
		{
			printf(", ");
		}
		i = j;
		j = add;
		f++;
	}
	printf("\n");
	return (0);
}
