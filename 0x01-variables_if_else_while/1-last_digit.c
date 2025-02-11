#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - The entry point to the program
 *
 * Description: Program that prints and describe the last digit of a random no
 *
 * Return: 0 for successful execution always
 */
int main(void)
{
	int n, dgt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	dgt = n % 10;
	if (dgt > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, dgt);
	else if (dgt < 6 && dgt != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, dgt);
	else
		printf("Last digit of %d is %d and is 0\n", n, dgt);
	return (0);
}
