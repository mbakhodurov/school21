#include "ft_swap.c"
#include <stdio.h>

int main()
{
	int a=2, b=5;
	printf("a=%d %d\n", a, b);
	
	ft_swap(&a,&b);
	printf("a=%d %d\n", a, b);
	// printf("a=%d\n", a);
	return 0;
}
