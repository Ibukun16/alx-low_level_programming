#include "3-calc.h"

/**
 * op_add - A function that return the sum of two integers
 * @a: The first of the 2 integers to add.
 * @b: The second of the 2 integers to add.
 *
 * Return: The sum of the 2 integers added.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - A function that return the difference of two integers
 * @a: The first of the 2 integers to find their difference
 * @b: The second integer to be deducted from the first.
 *
 * Return: The sum of the 2 integers added.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - A function that return the product of two integers.
 * @a: The first of the 2 integers to multiply together.
 * @b: The second of the 2 integers to multiply together.
 *
 * Return: The sum of the 2 integers added.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - A function that return the result of division of two integers.
 * @a: The nominator of the 2 integers to be divided.
 * @b: The denominator of the 2 integers.
 *
 * Return: The result of division of the 2 integers.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - A function that return the remainder from division of two integers
 * @a: The nominator of the 2 integers to be divided.
 * @b: The denominator of the 2 integers.
 *
 * Return: The remainder from the division of the 2 integers.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
