#include "main.h"

/**
 * is_separator - checks if a character is a word separator
 *
 * @c: the character to check
 *
 * Return: 1 if the character is a word separator, 0 otherwise
*/

int is_separator(char c)
{
	return (c == ' ' || c == '\t' ||
	c == '\n' || c == ',' || c == ';' || c == '.' ||
	c == '!' || c == '?' || c == '"' || c == '(' || c == ')' || c == '{' ||
	c == '}');
}

/**
 * cap_string - a function that capitalizes all words of a string
 *
 * @str: the string to be changed
 *
 * Return: a pointer to the resulting string
*/

char *cap_string(char *str)
{
	int i = 0;

	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] - ('a' - 'A');
	for (i = 1; str[i] != '\0'; i++)
	{
		if (is_separator(str[i - 1]))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - ('a' - 'A');
		}
	}
	return (str);
}
