#include <unistd.h>
#include "main.h"

/**
 * print_array - writes the charcter c to stdout
 * @a: The character to print
 * @n: num
 *
 * Return: On success 1.
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
