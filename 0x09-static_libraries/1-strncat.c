#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 *
 * @dest: the destination string
 *
 * @src: the source string
 *
 * @n: the maximum number of bytes to use from src
 *
 * Return: a pointer to the resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (j == n)
		dest[i] = '\0';
	return (dest);
}
