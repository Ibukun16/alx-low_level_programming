#include <stdio.h>
/**
 * main - Print the lowercase alphabet in reverse order
 * Return: Always successful
 */

int main(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}
	putchar('\n');
	return (0);
}
