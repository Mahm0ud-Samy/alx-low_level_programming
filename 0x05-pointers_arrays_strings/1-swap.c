#include <unistd.h>
#include "main.h"

/**
 * swap_int - swap two interger values
 * @a: dereference operator
 * @b: dereference operator
 *
 * Return: after swap.
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
