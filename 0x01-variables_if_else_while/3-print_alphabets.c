#include <stdio.h>

/**
 *main - First
 *
 *Return: Always
 */
int main(void)
{
	int ch;
	int ch1;
	int space;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch1 = 'A'; ch1 <= 'Z'; ch1++)
		putchar(ch1);

	space = '\n';
	putchar(space);
	return (0);
}
