#include <stdio.h>

/**
 * main - Print the uppercase and lowercase alphabet
 * Writing Upper case and lowercase alphabet together
 * Return: Always (0) a success
 */

int main(void)
{
	char lowercase, uppercase;

	lowercase = 'a';
	uppercase = 'A';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}
	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}
	putchar('\n');
	return (0);
}
