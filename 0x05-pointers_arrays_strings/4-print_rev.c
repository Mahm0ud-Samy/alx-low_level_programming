#include <unistd.h>
#include "main.h"

/**
 * print_rev - writes the charcter c to stdout
 * @s: The array of chars
 *
 * Return: reversed array.
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
