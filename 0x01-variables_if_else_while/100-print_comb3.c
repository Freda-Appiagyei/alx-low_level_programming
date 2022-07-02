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
	int k;
	int l;
	int m;
	int n;
	int i;
	int j;
	int space;

	for (ch1 = 1; ch1 < 10; ch1++)
		printf("0%d, ", ch1);
	for (ch2 = 12; ch2 < 20; ch2++)
		printf("%d, ", ch2);
	for (i = 23; i <= 29; i++)
		printf("%d, ", i);
	for (j = 34; j <= 39; j++)
		printf("%d, ", j);
	for (k = 45; k <= 49; k++)
		printf("%d, ", k);
	for (l = 56; l <= 59; l++)
		printf("%d, ", l);
	for (m = 67; m <= 69; m++)
		printf("%d, ", m);
	for (n = 78; n <= 79; n++)
		printf("%d, ", n);
	printf("89");
	space = '\n';
	putchar(space);
	return (0);
}
