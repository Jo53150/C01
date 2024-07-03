//#include <stdio.h>

void ft_ultimate_mod(int *a, int *b)
{
	int div;
	div = *a / *b; 
	int mod; 
 	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
int main()
{
	int a = 156;
	int b = 2;
	ft_ultimate_mod(&a,&b);
	printf("El resultado de la division es %d\n",a);
	printf("El resto de la division es %d\n",b);
        return 0;
}
*/
