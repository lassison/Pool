#include <unistd.h>

void ft_print_alphabet (void)
{
	write(1, "zyxwvutsrqponmlkjihgfedcba", 26);
}

int main ()
{
	return 0;
}
