#include "main.h"

#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints the alphabet
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char c = 'a';

	for (c = 'a'; c <= 'z'; c++)
	_putchar(c);
	_putchar('\n');
	return (0);
}
