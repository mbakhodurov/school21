#include "ft_ultimate_ft.c"
#include <stdio.h>

int main()
{
	int a = 2;
	printf("a=%d\n", a);
	int *b=&a;
	int **c=&b;
	int ***d=&c;
	
	ft_ft(d);
	printf("a=%d\n", a);
	return 0;
}