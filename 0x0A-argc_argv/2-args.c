#include <stdio.h>
#include "main.h"

/**
 * main - A program that prints all arguments it receives
 * @argc: return count of the arguments
 * @argv: retun a vector of array containing arguments
 *
 * Return: Always (0) success
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
