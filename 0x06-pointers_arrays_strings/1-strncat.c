#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strncat -  concatenates two strings.
 * @src: string 1
 * @dest: atring 2
 * @n: integer
 * Return: Always return a concantenated  string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *i = dest + strlen(dest);

	while (*src != '\0' && n--)
	{
		*i++ = *src++;
	}
	*i = '\0';
	return (dest);
}

