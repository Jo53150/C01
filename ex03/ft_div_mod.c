//#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{ 
	*div = a / b;
	*mod = a % b;  
}

/*
int main()
{
	int a = 153;
	int b = 2;
	int div = 0;
	int mod = 0;
	ft_div_mod(a, b, &div, &mod);
	printf("El resultado de la division es %d\n",div);
	printf("El resto de la division es %d\n",mod);
	return 0;
}
*/
