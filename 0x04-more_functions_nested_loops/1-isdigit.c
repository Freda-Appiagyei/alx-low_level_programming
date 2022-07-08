#include <stdio.h>
#include "main.h"

/**
 *_isdigit - check the code
 *
 * @c: paramter
 *
 *Return: Always 0
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		printf("%c: 1\n", c);
	else
		printf("%c: 0\n", c);
	return (0);
}
