#include <unistd.h>
#include "main.h"

/**
 * _strlen - get the length of the array
 * @s: array
 *
 * Return: On success length.
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		*s++;
		length++;
	}

	return (length);
}
