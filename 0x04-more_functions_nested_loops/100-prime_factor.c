#include <stdio.h>

/**
 * largest_prime_factor - find the largest prime factor
 *
 * @n: variable
 *
 * Return: the largest prime factor of n
*/

long largest_prime_factor(long n)
{
	long max_prime = -1;

	while (n % 2 == 0)
	{
		max_prime = 2;
		n /= 2;
	}

	for (int i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			max_prime = i;
			n = n / i;
		}
	}

	if (n > 2)
		max_prime = n;

	return (max_prime);
}

/**
 * main - Entry point
 *
 * Description: C program to print max prime num.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	long n = 612852475143;

	printf("%ld\n", largest_prime_factor(n));
	return (0);
}
