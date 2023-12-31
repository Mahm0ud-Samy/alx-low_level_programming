#include <unistd.h>
#include "main.h"

/**
 * _puts - display the whole string array
 * @str: Array of characters
 *
 * Return: On success display the string.
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
