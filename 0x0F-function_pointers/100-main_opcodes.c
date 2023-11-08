#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 1 if the number of arguments is incorrect,
 *         2 if the number of bytes is negative
*/

int main(int argc, char **argv)
{
	char *p - (char *)main;
	int b;

	if (argc != 2)
		printf("Error\n"), exit(1);
	b = atoi(argv[1]);
	if (b < 0)
		printf("Error\n"), exit(2);
	
	while (b--)
		printf("%02hhx%s", *p++, b ? " " : "\n");

	return (0);
}
