#include <stdio.h>

/**
 * main - entry point
 *
 * Description: whatever your description is
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
