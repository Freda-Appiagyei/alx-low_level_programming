#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *Return: nothing
 */
void rev_string(char *s)
{
	int i, temp, left , len, right;

	left = 0;
	len = strlen(s);
	right = len -1;

	for (i = left; i < right; i++)
	{
		temp = s[i];
		s[i] = s[right];
		s[right] = temp;
		right--;
	}

