#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program to print a line without printf or puts
 *
 * Return: 1 (not success)
*/

int main(void)
{

	const char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	while (*str)
	{
		putchar(*str++);
	}
	return (1);
}
