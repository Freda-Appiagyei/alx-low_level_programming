#include <stdio.h>

/**
 * main - Start
 *
 *Return: Here
 */
int main(void)
{
	int ch;
	int space;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' || ch != 'e')
			;
		else
			putchar(ch);
	}
	space = '\n';
	putchar(space);
	return (0);
}
