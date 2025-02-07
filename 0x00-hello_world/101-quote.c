#include <unistd.h>

/**
 * main - The entry point of the program where it is executed
 *
 * Description: A program that prints a string without using puts or printf
 *
 * Return: 1 for successful execution
 */
int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora korpar, 2015-10-19\n";

	write(2, msg, sizeof(msg) - 1);

	return (1);
}
