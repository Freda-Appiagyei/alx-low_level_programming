#include "main.h"
#include <stdio.h>

/**
 *print_most_numbers - Check code
 *
 *Return: Always 0
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
			continue;
		printf("%d", i);

	}
	printf("\n");
}

