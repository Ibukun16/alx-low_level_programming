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
	int arg1, arg3;

	if (argc == 4)
	{
		arg1 = atoi(argv[1]);
		arg3 = atoi(argv[3]);
		if (get_op_func(argv[2]) == NULL)
		{
			printf("Error\n");
			exit(99);
		}
		if ((*argv[2] == '/' || *argv[2] == '%') && arg3 == 0)
		{
			printf("Error\n");
			exit(100);
		}
		printf("%d\n", get_op_func(argv[2])(arg1, arg3));
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
