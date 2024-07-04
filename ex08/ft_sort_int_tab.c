//#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
	int swap;
	int count;
	count = 0;
	while(count < (size - 1))
	{
		if(tab[count] > tab[count + 1])
		{
			swap = tab[count];
			tab[count] = tab[count + 1];
			tab[count + 1] = swap;
			count = 0;
		}
		else
			count++;
	}
}
/*
int main() 
{
	int tab[5] = {50,10,30,100,40};
	ft_sort_int_tab(tab, 5);
	for(int i = 0; i < 5; i++)
	{
		printf("%d\n", tab[i]);
	}
}
*/
