#include <unistd.h>
#include "main.h"

/**
 * Description: _putchar writes the char c to stdout
 *
 * Return: On success 1.
 *		On error -1 is turned.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
