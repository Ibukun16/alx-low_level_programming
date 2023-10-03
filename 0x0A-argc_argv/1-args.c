#include <stdio.h>
#include "main.h"

/**
 * main - A program that prints number of arguments apssed unto it
 * @argc: count of arguments
 * @argv: array of vectors containing arguments
 *
 * Return: Always (0) success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
