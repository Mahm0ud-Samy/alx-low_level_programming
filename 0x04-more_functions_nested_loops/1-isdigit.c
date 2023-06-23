#include <stdbool.h>

/**
 * _isdigit - check if it is a digit or not
 *
 * @c: input for digit
 *
 * Return: 1 if it is digit, 0 if it is not.
 */
int _isdigit(int c)
{
	return (c >= 0 || c <= 9);
}
