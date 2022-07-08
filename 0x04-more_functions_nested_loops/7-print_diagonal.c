#include "main.h"
#include <stdio.h>

/**
 *print_diagonal - check the code
 *@n: paramter
 *Return: Always 0.
 */
void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
			_putchar(' ');
		_putchar('\\');
	}
	_putchar('\n');
}
