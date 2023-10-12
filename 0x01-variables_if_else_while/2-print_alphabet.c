#include <stdio.h>

/**
 * main - Entry pint
 *
 * Description: A C program
 *
 * Return: 0 (success)
*
*/

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
