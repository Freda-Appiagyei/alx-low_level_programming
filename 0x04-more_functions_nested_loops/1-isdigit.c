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
		printf("%c: ", c);
		return (1);
	else
		printf("%c: ", c);
		return (0);
}
