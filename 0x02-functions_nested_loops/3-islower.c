#include "main.h"

/**
 *_islower - check the code.
 *@c:Parameter
 *Return: Alway 0
 */
int _islower(int c)/* c - a val*/
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
