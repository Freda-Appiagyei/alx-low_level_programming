#include <stdio.h>

/**
 *main - Fre
 *
 *Return: Gre
 */
int main(void)
{
	int ch1;
	int ch2;
	int space;

	for (ch1 = 0; ch1 < 9; ch1++)
		printf("0%d, ", ch1);
	for (ch2 = 12; ch2 < 89; ch2++)
		printf("%d, ", ch2);
	printf("89");
	space = '\n';
	putchar(space);
	return (0);
}
