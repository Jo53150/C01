//#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
	int index;
	int c;
	index = 0;
	c = 0;
	while(index < (size / 2))
	{
		c = tab[index];
		tab[index] = tab[size - 1 - index];
		tab[size - 1 - index] = c;
		index++;
	}	
}
/*
int main()
{
	int tab[] = {0, 1, 2, 3, 4, 5};
	int size = 6;
	ft_rev_int_tab(tab, size);
	printf("%d%d%d%d%d%d\n", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
	return 0;
}
*/
