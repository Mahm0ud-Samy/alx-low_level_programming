#include <stdbool.h>

/**
 *  _isupper - check if c is upper.
 *
 *  @c: input for alphabet
 *
 *  Return: 1 if it is uppercase, 0 if not.
 */
bool _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
