#include <stdio.h>
#include "main.h"

/**
 *print_square - check the code
 *@size: paramter
 *Return: Always 0.
 */
void print_square(int size)
{
	int i;
	int j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
			_putchar('#');
		_putchar('\n');
	}
	_putchar('\n');
}
