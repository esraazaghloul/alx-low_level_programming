#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random passwords for 101-crackme
 *
 * Return: 0 if successful, 1 otherwise
*/

int main(void)
{
	int i;
	char password[16];

	srand(time(NULL));

	for (i = 0; i < 14; i++)
		password[i] = 'a' + rand() % 26;
	password[15] = '\0';

	printf("%s\n", password);

	return (0);
}

