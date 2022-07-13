#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: paramter
 * Return: nothing
 */
void print_rev(char *s)
{
	int j;

	for (j = strlen(s) - 1; s[j] != '\0'; j--)
		_putchar(s[j]);
	_putchar('\n');
}
