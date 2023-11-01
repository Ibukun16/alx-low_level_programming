#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - A function that prints the result of multiplication
 * of two numbers
 * @argc: The count of the number of argument to be multiplied
 * @argv: An array containing the argument to be multiplied
 *
 * Return: The result of the multiplication.
 */
int main(int argc, char *argv[])
{
	int prod, n1, n2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	prod = n1 * n2;

	printf("%d\n", prod);

	return (0);
}
