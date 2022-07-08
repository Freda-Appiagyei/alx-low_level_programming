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
		return ("%c: 1", c);
	return ("%c: 0", c);
}
