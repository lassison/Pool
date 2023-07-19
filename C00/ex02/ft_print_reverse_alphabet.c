#include <unistd.h>

void ft_print_alphabet (void)
{
	write(1, "zyxwvutsrqponmlkjihgfedcba", 26);
}

// void ft_print_alphabet (void)
// {
// 	char letter = 'z';

// 	while ( letter >= 'a')
// 	{
// 		write(1, &letter, 1);
// 		letter --;
// 	}
// }
