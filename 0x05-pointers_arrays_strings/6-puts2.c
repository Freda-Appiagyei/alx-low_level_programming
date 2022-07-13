#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character of a str
 * @str: string
 * Return: no value
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}

