#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a string
 * @dest: string 1
 * @src: string 2
 * @n: integer
 * Return: a character
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *i = dest;

	if (dest == NULL)
		return (NULL);

	while (*src && n--)
	{
		*dest++ = *src++;
	}
	*dest = '\0';

	return (i);
}
