#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints the opcodes of its own main function
 * @argc: The count of number of arguments
 * @argv: The array containing the argument
 *
 * Return: Print the opcode of the main function
 */
int main(int argc, char *argv[])
{
	char *a;
	int i, bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	a = (char *)main;
	for (i = 0; i < bytes - 1; i++)
		printf("%02hhx ", a[i]);
	printf("%hhx\n", a[i]);
	return (0);
}
