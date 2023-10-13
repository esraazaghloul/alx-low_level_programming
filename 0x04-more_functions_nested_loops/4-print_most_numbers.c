#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9 except 2 and 4
 *
 * Return: None
*/

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (num == 2 || num == 4)
			continue;
		_putchar(num + 48);
	}
	_putchar('\n');
}
