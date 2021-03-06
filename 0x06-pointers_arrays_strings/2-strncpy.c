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
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	i = i;
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
