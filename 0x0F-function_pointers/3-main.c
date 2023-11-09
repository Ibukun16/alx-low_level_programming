#include "3-calc.h"

/**
 * main - A program that performs simple arithmetic operations
 * @argc: count of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int n1, n2, res;
	char a;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);

	func = get_op_func(argv[2]);
	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	a = *argv[2];
	if ((a == '/' || a == '%') && n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	res = func(n1, n2);
	printf("%d\n", res);
	return (0);
}

