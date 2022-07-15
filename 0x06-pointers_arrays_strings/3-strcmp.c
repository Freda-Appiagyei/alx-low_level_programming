#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: character 1
 * @s2: character 2
 * Return: compares
 */
int _strcmp(char *s1, char *s2)
{
	int p = 0;
	int b = 0;

	while (s1[p] != '\0' && b == 0)
	{
		b = s1[p] - s2[p];
		p++;
	}
	return (b);
}
