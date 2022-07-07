#include "main.h"

/**
 *print_last_digit - check the code
 *@n: paramter
 *Return: Always 0.
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
	{
		n = -n;
	}
	a = n % 10;
	return (a);
}

