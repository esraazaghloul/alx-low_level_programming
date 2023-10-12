#include <stdio.h>

/**
 * main - Entry pint
 *
 * Description: A C program
 *
 * Return: 0 (success)
*/

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		putchar('\n');
		i++;
	}
	return (0);
}
