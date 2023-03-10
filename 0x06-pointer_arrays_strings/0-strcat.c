#include "main.h"

/**
 * strcat - concatenates two strings
 * @dest: A pointer to a string strcat acts
 * @src: The source string for @dest
 *
 * Return: A pointer to @dest.
 */
char *strcat(char *dest, const char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
