#include <unistd.h>
#include "main.h"

/**
 * puts_half - writes the charcter c to stdout
 * @str: The character to print
 *
 * Return: On success 1.
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
