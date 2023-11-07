#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: number to find the square root of
 *
 * Return: natural square root of n, or -1 if n does not have a natural square root
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (_sqrt_helper(n, 1, n));
	}
}

/**
 * _sqrt_helper - helper function for _sqrt_recursion
 *
 * @n: number to find the square root of
 *
 * @min: minimum possible square root
 *
 * @max: maximum possible square root
 *
 * Return: natural square root of n, or -1 if n does not have a natural square root
*/

int _sqrt_helper(int n, int min, int max)
{
	int mid;

	if (max < min)
	{
		return (-1);
	}

	mid = (min + max) / 2;

	if (mid * mid == n)
	{
		return (mid);
	}
	else if (mid * mid > n)
	{
		return (_sqrt_helper(n, min, mid - 1));
	}
	else
	{
		return (_sqrt_helper(n, mid + 1, max));
	}
}
