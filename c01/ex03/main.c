#include "ft_div_mod.c"
#include <stdio.h>

int main()
{
	int a=2, b=5, div=0, mod=0;
	
	ft_div_mod(a,b, &div, &mod);
	printf("a=%d %d\n", div, mod);
	// printf("a=%d\n", a);
	return 0;
}
