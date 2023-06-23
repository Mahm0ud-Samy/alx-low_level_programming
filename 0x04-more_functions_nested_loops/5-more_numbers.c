#include <unistd.h>
#include "main.h"

/**
 * more_numbers - print numbers from 0 to 14 for 1o times
 *
 * Return: 1o times from 0 to 14 the numbers
 *
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; i++)
		{
			_putchar('0' + j);
		}
		_putchar('\n');
	}
}
