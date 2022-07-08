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
	int b;

	if (n <= 0)
		putchar('\n');

	for (b = 1; b <= n; b++)
	{
		for (i = 1; i <= b - 1; i++)
			putchar(' ');
		putchar('\\');
		putchar('\n');
	}
}
