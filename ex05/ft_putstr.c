#include <unistd.h>

void ft_putstr(char *str)
{
	int index = 0;
	while(str[index])
	{
		write(1,&str[index],1);
		index++;
        }
}

int main() 
{
	char *str = "hola como estas";
	ft_putstr(str);
}
