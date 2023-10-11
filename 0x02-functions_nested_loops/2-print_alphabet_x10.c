#include "main.h"

#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints the alphabet
 *
 * Return: Always 0 (Success)
*/

int main()
{
	char c = 'a';
	int i = 1;

	for (i <= 10)
	{
	for (c = 'a'; c <= 'z'; c++)
	putchar(c);
	putchar('\n');
	i = i + 1;
	}
	return (0);
}
