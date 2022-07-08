#include <unistd.h>
#include "main.h"

/**
 *_putchar -writes
 *@c: The character
 *
 *Return: On sucess
 *On error, -1 is 
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
 
