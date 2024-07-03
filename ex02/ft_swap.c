//#include <stdio.h>

void ft_swap(int *a, int *b)
{
	int temp;
        temp = *b;
        *b = *a;
	*a = temp;
}
/*
int main()
{
	int a = 1;
        int b = 2;
	printf("El valor de a es %d\n",a);
	printf("El valor de b es %d\n",b);
        ft_swap(&a,&b);
	printf("El valor de a es %d\n",a);
	printf("El valor de b es %d\n",b);
	return 0; 
} 
*/
