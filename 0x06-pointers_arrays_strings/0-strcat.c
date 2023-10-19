#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 *
 * @dest: the destination string
 *
 * @src: the source string
 *
 * Return: a pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src)
{
	char *ptr = dest + strlen(dest);

	while (*src != '\0')
		*ptr++ = *src++;
	*ptr = '\0';
	return (dest);
}
