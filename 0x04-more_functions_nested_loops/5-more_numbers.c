#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Description: a C program
 *
 * Return: None
*/

void more_numbers(void)
{
	int n, r, c;

	for (r = 1; r <= 10; r++)
	{
		n = c;
		if (c > 9)
		{
			_putchar(1 + 48);
			n = count % 10;
		}
		_putchar(n + 48);
	}
	_putchar('\n');
}
