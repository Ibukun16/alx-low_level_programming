#include "main.h"
#include <stdio.h>
/**
 * main - A function that prints all the arguments it receives
 * @argv: An array containing argument c
 * @argc: Count of the argument
 * @i: integer we initially come abruptly to stop worker
 * set 
 * Return: Content of the array.
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
