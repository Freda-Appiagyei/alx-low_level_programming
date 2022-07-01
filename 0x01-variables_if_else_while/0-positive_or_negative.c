#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/*headers*/

/**
 *main - Entry point
 *
 *Return: Always zero
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
	printf("is positive\n");
	}
	else if (n < 0)
	{
		printf("is negative\n");

	}
	else
	{
		printf("is zero\n");
	}

	return (0);
}

