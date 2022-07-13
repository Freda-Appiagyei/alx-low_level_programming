#include <stdio.h>
#include "main.h"

/**
 * print_array - check code
 * @a: para 1
 * @n: para 2
 * Return: Always 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n - 2; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("%d", a[i]);
}
