#include "main.h"

/**
 * print_buffer - prints a buffer
 *
 * @b: pointer to the buffer
 *
 * @size: size of the buffer
 *
 * Return: Nothing.
*/

void print_buffer(char *b, int size)
{
	int i, j;

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
				printf("%02x", b[i + j]);
			else
				printf("  ");
			if (j % 2)
				_putchar(' ');
		}
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				if (b[i + j] < 32 || b[i + j] > 126)
					_putchar('.');
				else
					_putchar(b[i + j]);
			}
		}
	_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
