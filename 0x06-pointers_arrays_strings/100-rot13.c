#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13
 *
 * @p: the string to be encoded
 *
 * Return: a pointer to the resulting string
*/

char *rot13(char *p)
{
	int i;
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; p[i] != '\0'; i++)
	{
		int j = 0;

		while (alphabet[j] != '\0' && p[i] != alphabet[j])
			j++;
		if (p[i] == alphabet[j])
			p[i] = rot13[j];
	}
	return (p);
}
