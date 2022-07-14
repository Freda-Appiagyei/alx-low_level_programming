#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings.
 * @dest: string 1
 * @src: string 2
 * Return: Charcter
 */
char *_strcat(char *dest, char *src)
{
	char *i = dest + strlen(dest);

	while (*src != '\0')
	{
		*i++ = *src++;
	}
	*i = '\0';

	return (dest);
}
