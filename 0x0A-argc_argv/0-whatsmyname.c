#include <stdio.h>
#include "main.h"

/**
 * main - A function that prints the name of program
 * @argc: return count of the arguments
 * @argv: return vector array of the arguments
 *
 * Return: Always (0) success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
