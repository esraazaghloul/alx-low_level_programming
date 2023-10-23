#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 *
 * @s: The string to be scanned
 *
 *  @accept: The string containing characters to match
 *
 * Return: A pointer to the byte in s
 * matches one of the bytes in accept,
 * or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			f (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
