#include "main.h"

/**
 *_islower - check the code.
 *
 *Return: Always 0
 *
 *c - A value
 */
int _islower(int c)/* c - a val*/
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
