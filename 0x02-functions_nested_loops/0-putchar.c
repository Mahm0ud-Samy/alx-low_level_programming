#include <main.h>

/**
 * main - entry point
 *
 * Description: just print a _putchar on the screen followd by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	ch str[] = "_putchar";
	int i;

	for (i = 0; i < sizeof(str) / sizeof(str[0]); i++)
		_putchar(str[i]);
	_putchar(\n);

	return (0);
}
