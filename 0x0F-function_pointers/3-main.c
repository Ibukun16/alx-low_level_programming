#include "3-calc.h"

/**
 * main - program that perfroms simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int arg1, arg2, ans;
	char optr;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	optr = *argv[2];

	if ((optr == '/' || optr == '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	ans = func(arg1, arg2);

	printf("%d\n", ans);

	return (0);
}
