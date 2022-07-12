#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: prints a string, followed by a new line, to stdout.
 * Return: Always 0
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
