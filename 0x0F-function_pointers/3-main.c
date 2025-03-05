#include "3-calc.h"

/**
 * main - The entry point into the program
 * @argc: The count of the number of arguments of the function
 * @argv: The argument array of the function
 *
 * Return: 0 for successful execution, 98 if argc is incorrect,
 * else 99 for an ivalid operation and 100 when denominator is 0.
 */
int main(int argc, char *argv[])
{
	int arg1, arg3, result, (*func)(int, int);
	char operator;

	if (argc == 4)
	{
		arg1 = atoi(argv[1]);
		func = get_op_func(argv[2]);
		arg3 = atoi(argv[3]);
		if (func == NULL)
		{
			printf("Error\n");
			exit(99);
		}
		operator = *argv[2];
		if ((operator == '/' || operator == '%') && arg3 == 0)
		{
			printf("Error\n");
			exit(100);
		}
		result = func(arg1, arg3);
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
