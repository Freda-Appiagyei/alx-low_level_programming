#include "main.h"
#include <stdio.h>

int main(void)
{
	int ans;

	ans = mul(2, 3);
	print_numbers();	
	printf("%d", ans);
	more_numbers();
	print_most_numbers();
	return (0);
}
