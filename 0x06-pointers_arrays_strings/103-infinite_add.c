#include "main.h"

/**
 * infinite_add - A function that adds up two numbers
 * @r: pointer to buffer that holds the result
 * @n1: A char pointer that rep the first of the two numbers to add
 * @n2: A char pointer that rep the second of the two numbers to add
 * @size_r: size of the buffer that hilds the result.
 *
 * Description: A function that adds numbers that are passed
 *	as a string and add them up.
 * Return: 0 always for successful execution and pass the the result
 * to char *r.
 * STEP FOR THE SOLUTION
 * A: count up how long both n1 and n2 is
 * B: The counter usually exceed the index by 1 since index starts from 0
 * so we need to decrement the counter by 1 to get the index value.
 * C: If the buffer size given is less than the size of either count1 or
 * count2, then we return 0, which signals main error.
 * D: We sum up the last digit and append the result. This we will need
 * to swap later. We then loop from the last indices on until size_r.
 * E: We add up the index of n1[len1] and n2[len2].
 * F: if count1 and count2 are less than 0, we break out of the loop
 * because we have iterated through all the character arrays and
 * there is nothing left to iterate.
 * G: SIMPLE OVERFLOW HANDLING. We want the last digit, and if we have
 *	a number with a 1 or higher in the tens digit we store that in tens.
 *We then include that number in the sum and continue.
 * H: We need to swap because at step E we added and made our r[idx]
 *	array from the end to the end instead of from the beginning
 *	to the end. This helped us deal with overflow on the integers, but
 *	the downside is we need to swap later on which is tedious.
 *	Another way of going forward to back and not having to deal with swaps
 *	would be a complex r[i-1] += 1 type of situation but that can be
 *	difficult with out of bounds array issues and some other stuff
 * I: So if we had reach the size_r but we still have more of count1 and
 * count2 indices to add, then that is an error since we didn't finish,
 * so return 0.
 * J: Idx is our buffer size counter. So it is only fitting we had to put the
 *	last char with the idx counter as the null char. then we idx--
 *	so we can start at the very last index right next to the null char
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, carry = 0, dgt1, dgt2, idx, max_len, sum;

	for (len1 = 0; n1[len1] != '\0'; len1++)
		;
	for (len2 = 0; n2[len2] != '\0'; len2++)
		;

	max_len = len1 > len2 ? len1 : len2;
	if (size_r <= max_len + 1)
		return (0);
	len1--;
	len2--;

	for (idx = max_len - 1; idx >= 0; len1--, len2--, idx--)
	{
		dgt1 = len1 >= 0 ? n1[len1] - '0' : 0;
		dgt2 = len2 >= 0 ? n2[len2] - '0' : 0;

		sum = dgt1 + dgt2 + carry;
		r[idx] = (sum % 10) + '0';
		carry = sum / 10;
	}
	r[max_len] = '\0';

	if (carry > 0 && size_r >= max_len + 2)
	{
		for (idx = max_len + 1; idx > 0; idx--)
			r[idx] = r[idx - 1];

		r[0] = carry + '0';
		return (r);
	}
	else
		return (0);
}
