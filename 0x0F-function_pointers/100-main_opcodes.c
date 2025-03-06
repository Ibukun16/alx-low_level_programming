#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the function that prints opcodes of its function
 * @argc: The count of the command line arguments
 * @argv: Array of the command line arguments
 *
 * Return: 0 for successful execution.
 */
int main(int argc, char *argv[])
{
	int c, num_bytes;
	unsigned char *func = (unsigned char *) &main;

	if (argc == 2)
	{
		num_bytes = atoi(argv[1]);
		if (num_bytes < 0)
		{
			printf("Error\n");
			exit(2);
		}
		for (c = 0; c < num_bytes; c++)
			printf("%02x%c", (func[c]), c < num_bytes - 1 ? ' ' : '\n');
	}
	else
	{
		printf("Error\n");
		exit(1);
	}
	return (0);
}
