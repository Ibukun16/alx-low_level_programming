#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *concat;

	concat = string_nconcat("Hello", NULL, 12); string_nconcat(NULL, "Hello", 0); string_nconcat(NULL, NULL, 10);
	printf("%s\n", concat);
	free(concat);
	return (0);
}
