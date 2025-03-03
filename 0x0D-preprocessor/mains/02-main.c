#include <stdio.h>
/**
 * main - A function that prints the name of file it is compiled from
 * Return: 0 on successful execution.
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
