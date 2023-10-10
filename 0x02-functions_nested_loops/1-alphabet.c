#include "main.h"

#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints with printf function
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char c = 'a';

	for (c = 'a'; c <= 'z'; c++)
	write(1, &c, 1);
	write(1, "\n", 1);
	return (0);
}
