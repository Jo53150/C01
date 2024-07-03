//#include <stdio.h>

int ft_strlen(char *str)
{
	int count = 0;
	while(str[count])
	{
		count++;
	}
	return count;
}
/*
int main()
{
	char *str = "hola";
	int count = ft_strlen(str);
	printf("la cadena tiene de longitud %d\n",count);
}
*/
