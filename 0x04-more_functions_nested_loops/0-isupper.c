#include "main.h"
#include <stdio.h>

/**
 * _isupper - print uppercase character
 * @c: The character to print.
 *
 * Return: 1 if c is uppercase
 *         0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
