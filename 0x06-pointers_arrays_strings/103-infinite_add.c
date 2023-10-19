#include "main.h"

/**
 * infinite_add - adds two numbers
 *
 * @n1: first number
 *
 * @n2: second number
 *
 * @r: buffer to store the result
 *
 * @size_r: buffer size
 *
 * Return: pointer to the result, or 0 if the result can not be stored in r
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k;
	int carry = 0;
	int digit_sum;

	for (i = 0; n1[i] != '\0'; ++i)
		;
	for (j = 0; n2[j] != '\0'; ++j)
		;
	--i;
	--j;
	k = size_r - 2;
	r[size_r - 1] = '\0';

	while (i >= 0 || j >= 0 || carry > 0)
	{
		if (k < 0)
			return (0);

		digit_sum = carry;
		if (i >= 0)
			digit_sum += n1[i--] - '0';
		if (j >= 0)
			digit_sum += n2[j--] - '0';
		r[k--] = (digit_sum % 10) + '0';
		carry = digit_sum / 10;
	}
	return (&r[k + 1]);
}
