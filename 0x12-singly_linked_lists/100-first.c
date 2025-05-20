#include "lists.h"
#include <stdio.h>

void first(void)__attribute__((constructor));
/**
 * first - A function that prints some words before the main function
 * Description: Utilizes the constructor attribute to ensure this function
 * runs before the main function. It prints out a specific message.
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
