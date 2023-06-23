#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the charcter c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 *         On error, -1 is returned, and errno is set appropiately.
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}
