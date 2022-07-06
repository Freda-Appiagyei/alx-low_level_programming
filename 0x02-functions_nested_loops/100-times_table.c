#include "main.h"
#include <stdio.h>

/**
 *print_times_table - check code
 *@n: paraamter
 *Return: Always 0
 */
void print_times_table(int n)
{
	int i;
	int j;
	int k;

	if (n < 15 || n > 0)
	{
		for (i = 0; i <= n; i++)
		 
		k = 1;
		for (j = 0; j < n; j++)
		{
			k = i * j;
			printf("%d, ", k);
		}
		printf("%d", j * i);
		_putchar('\n');
		
	}
}
