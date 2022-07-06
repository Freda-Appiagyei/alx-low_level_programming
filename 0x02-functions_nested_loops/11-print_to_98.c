#include "main.h"
#include <stdio.h>

/**
 *print_to_98 - check the code
 *@n: paramter
 *Return: Always 0.
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i > 98; i--)
			_putchar(i);
	}
	else
	{
	for (i = n; i <= 98; i++)
		_putchar(i);
	}
	_putchar('\n');
}
