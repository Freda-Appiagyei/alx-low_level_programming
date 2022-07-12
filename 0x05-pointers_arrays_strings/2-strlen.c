#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: string
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int res = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		res++;
	}
	return (res);
}
