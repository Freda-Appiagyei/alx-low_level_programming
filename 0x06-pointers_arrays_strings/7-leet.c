#include "main.h"

/**
 * leet - encodes a string
 * @str: the string to encode
 *
 * Return: encoded string
 */
char *leet(char *str)
{
	int a;
	int b;
	char c[] = "aAeEoOtTlL";
	char d[] = "4433007711";

	a = 0;
	while (str[a] != '\0')
	{
		b = 0;
		while (c[b] != '\0')
		{
			if (str[a] == c[b])
			{
				str[a] = d[b];
			}
			b++;
		}
		a++;
	}
	return (str);
}
