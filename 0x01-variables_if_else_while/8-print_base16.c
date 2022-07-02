#include <stdio.h>

/**
 *main - Fr
 *
 *Return: Grr
 */
int main(void)
{
	int ch1;
	int ch;
	int space;

	for (ch = 0; ch < 10; ch++)
		printf("%d", ch);
	for (ch1 = 'a'; ch1 <= 'f'; ch1++)
		putchar(ch1);
	space = '\n';
	putchar(space);
	return (0);
}
