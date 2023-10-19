#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 *
 * @p: the string to be encoded
 *
 * Return: a pointer to the resulting string
 */

char *leet(char *p)
{
	int i, j;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	for (i = 0; p[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (p[i] == letters[j])
			{
				p[i] = numbers[j];
				break;
			}
		}
	}
	return (p);
}
