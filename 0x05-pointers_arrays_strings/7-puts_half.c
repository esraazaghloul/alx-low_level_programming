#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: pointer to the string to print
 *
 * Return: void
 */

void puts_half(char *str)
{
	int len = strlen(str);
	int n = (len - 1) / 2;
	int start = len % 2 == 0 ? len / 2 : n + 1;

	for (int i = start; i < len; i++)
		putchar(str[i]);
	putchar('\n');
}
