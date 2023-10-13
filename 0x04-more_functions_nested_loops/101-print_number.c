#include "main.h"

/**
 * print_number - prints an integer char by char
 *
 * @n: The integer to print
 *
 * Description: a C function
 *
 * Return: void
*/

void print_number(int n)
{
	unsigned int m = n;

	if (n < 0)
	{
		_putchar('-');
		m = -m;

	}

	if ((m / 10) > 0)
		print_number(m / 10);

	_putchar((m % 10) + 48);
}
