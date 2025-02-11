#include <stdio.h>

/**
 * main - The entry point to the program that prints the alphabet.
 *
 * Description: A program that prints the alphabet in lower case.
 *
 * Return: 0 for successful execution always
 */
int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
		putchar(alp);
	putchar ('\n');
	return (0);
}
