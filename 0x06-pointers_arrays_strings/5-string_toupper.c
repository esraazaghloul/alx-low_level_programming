#include "main.h"

/**
 * string_toupper - a function that changes all lowercase letters to uppercase
 *
 * @s: the string to be changed
 *
 * Return: a pointer to the resulting string
*/

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 'a' + 'A';
		i++
	}
	return (s);
}
