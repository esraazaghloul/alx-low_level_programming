#include "main.h"

/**
 * print_diagonal - Draws a diagonal line in the terminal.
 *
 * Description: a C funtion
 *
 * Return: none
 *
 * @n: The number of times the character '\' should be printed.
*/

void print_diagonal(int n)
{
	int i, space;

	if (n>0)
	{
		for (i = 0; i < n; i++)
		{
			for (space = x; space <i; space++)
			_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
