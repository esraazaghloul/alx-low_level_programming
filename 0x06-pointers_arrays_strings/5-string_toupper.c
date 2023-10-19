#include "main.h"

/**
 * string_toupper - a function that changes all lowercase letters to uppercase
 *
 * @str: the string to be changed
 *
 * Return: a pointer to the resulting string
*/

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
