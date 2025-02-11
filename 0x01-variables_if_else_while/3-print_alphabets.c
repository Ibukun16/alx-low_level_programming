#include <stdio.h>

/**
 * main - The entry point to the program that prints the alphabet.
 *
 * Description: A program that prints alphabets in upper and lower case.
 *
 * Return: 0 for successful execution always
 */
int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
		putchar(alp);

	for (alp = 'A'; alp <= 'Z'; alp++)
		putchar(alp);

	putchar ('\n');
	return (0);
}
