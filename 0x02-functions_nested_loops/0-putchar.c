#include "main.h"

#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints with printf function
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char str[] = "_putchar\n";
	for (int i = 0; str[i] != '\0'; i++)
	{
		 write(1, &str[i], 1);
	};
	Return 0;
}
