#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*my headers*/

/**
 *main - Entry point
 *
 * Return: Always zero
 */

int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (last_digit > 5)
	{
		printf("%d %d and is greater than 5\n", last_digit, n);
	}
	else if (last_digit == 0)
	{
		printf("%d %d and is 0\n", last_digit, n);
	}
	else if (last_digit <6 && last_digit !=0)
	{
		printf("%d %d and is less than 6 and not 0\n", last_digit, n);
	}
	return (0);

}
