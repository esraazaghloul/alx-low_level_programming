#include "main.h"

/**
 * _strstr - Locates a substring
 *
 * @haystack: The string to be scanned
 *
 * @needle: The substring to be located
 *
 * Return: A pointer to the beginning of the located substring,
 * or NULL if the substring is not found
*/

char *_strstr(char *haystack, char *needle)
{
	char *a, *b;

	while (*haystack)
	{
		a = haystack;
		b = needle;

		while (*haystack && *b && *haystack == *b)
		{
			haystack++;
			b++;
		}

		if (!*b)
			return (a);
		haystack = a + 1;
	}
	return (NULL);
}
