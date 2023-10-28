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
	int i;
       for(i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
