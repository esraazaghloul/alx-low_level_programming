#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer
 * is a prime number, otherwise returns 0
 *
 * @n: number to check
 *
 * Return: 1 if n is prime, 0 otherwise
*/

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - helper function for is_prime_number
 *
 * @n: number to check
 *
 * @i: divisor to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_helper(int n, int i)
{
	if (i == n)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime_helper(n, i + 1));
	}
}
