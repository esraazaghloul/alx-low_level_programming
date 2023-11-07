#include "main.h"

/**
 * is_palindrome - returns 1 if string is a palindrome and 0 if not
 *
 * @s: string to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
*/

int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return
}

/**
 * palindrome_helper - helper function for is_palindrome
 *
 * @s: string to check
 *
 * @start: starting index
 *
 * @end: ending index
 *
 * Return: 1 if s is a palindrome, 0 otherwise
*/

int palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (palindrome_helper(s, start + 1, end - 1));
}
