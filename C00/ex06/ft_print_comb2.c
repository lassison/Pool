#include <unistd.h>
#include <stdbool.h>

void ft_putchar (char c)
{
    write(1, &c, 1);
}

void ft_custom_putchar (int a, int b, bool last)
{
    ft_putchar(48 + a / 10);
    ft_putchar(48 + a % 10);
    ft_putchar(' ');
    ft_putchar(48 + b / 10);
    ft_putchar(48 + b % 10);
    if (last)
    {
        ft_putchar(',');
        ft_putchar(' ');
    }
}

void ft_print_comb2 (void)
{
	int a, b;
    bool last;

    a = 0;
    while ( a <= 99 )
    {
        b = a + 1;
        while ( b <= 99 )
        {
            last = !(a == 98 && b == 99);
            ft_custom_putchar(a, b, last);
            b++;
        }
        a++;
    }
}