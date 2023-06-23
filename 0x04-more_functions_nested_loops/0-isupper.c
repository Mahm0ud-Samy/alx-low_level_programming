#include <stdbool.h>

/**
 *  main - check the code.
 *
 *  Description: print uppercase letters
 *
 *  Return: Always 0.
 */
bool _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
