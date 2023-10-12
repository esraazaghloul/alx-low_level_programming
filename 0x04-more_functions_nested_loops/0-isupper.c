#include <stdio.h>

/**
 * _isupper - check if c is uppercase
 *
 * Description: A C program
 *
 * @c: input for alphabet
 *
 * Return: 1 if upper, 0 if lower
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
