#include <stdio.h>
#include "main.h"

/**
 *print_line - check the code
 *
 *Return: Always 0
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
		printf("_");
	printf("\n");
}
