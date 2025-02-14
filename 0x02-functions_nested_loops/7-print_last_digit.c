#include "main.h"

/**
 * print_last_digit - A function that prints the last digit of a number
 * @n: The number to print its last digit
 *
 * Return: The absolute value of the last digit of the number.
 */
int print_last_digit(int n)
{
	int digit = n < 0 ? (n % 10) * -1 : (n % 10);

	_putchar(digit + '0');
	return (digit);
}
