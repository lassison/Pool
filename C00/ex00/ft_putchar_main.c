#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main () 
{
	ft_putchar('A');
	ft_putchar('C');
	ft_putchar('H');
	ft_putchar('R');
	ft_putchar('A');
	ft_putchar('F');
    ft_putchar('\n');
	return 0;	
}