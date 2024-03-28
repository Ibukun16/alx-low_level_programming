int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int mod(int a, int b);

/**
 * add - A function that add two integers
 * @a: The firts integer
 * @b: The second integer
 *
 * Return: sum as answer
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - A function that return difference of two integers
 * @a: The firts integer 
 * @b: The second integer 
 *
 * Return: difference as answer
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - A function that finds the product of two integers
 * @a: The firts integer
 * @b: The second integer
 *
 * Return: product as answer
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - A function that divides an integer by another
 * @a: The firts integer
 * @b: The second integer
 *
 * Return: divide factor
 */
int div(int a, int b)
{
	return (a / b);
}

/**
 * mod - A function that returns the reminder
 *	from division of two integers
 * @a: The firts integer
 * @b: The second integer
 *
 * Return: reminder from the division as the answer
 */
int mod(int a, int b)
{
	return (a % b);
}
