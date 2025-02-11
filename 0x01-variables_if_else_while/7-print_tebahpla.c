#include <stdio.h>

/**
 * main - The entry point to the program that prints the alphabet in reverse.
 *
 * Description: A program that prints the lowercase alphabet in reverse
 *
 * Return: 0 for successful execution always
 */
int main(void)
{
	char alp;

	for (alp = 'z'; alp >= 'a'; alp--)
		putchar(alp);
	putchar ('\n');
	return (0);
}
