#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <time.h>

/**
 * main - generate password.
 *
 * Return: Only success
 */

int main(void)
{
	int asc = 2772, i = 0, l, r;
	char password[100];
	time_t p;

	srand((int) time(&p));
	while (asc > 126)
	{
		r = rand() % 126;
		password[i] = r;
		asc -= r;
		i++;
	}
	if (asc > 0)
		password[i] = asc;
	else
	{
		i--;
	}

	l = 0;
	while (l <= i)
	{
		printf("%c", password[l]);
		l++;
	}
	return (0);
}
