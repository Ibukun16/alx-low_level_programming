#include "main.h"
#include <stdio.h>
/**
 * main - A function that prints the number of argument passed on to it
 * @argc: The count of the argument
 * @argv: The array vector of the argument
 *
 * Return: The count of the argument
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
