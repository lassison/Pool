/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achraf <achraf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 19:32:26 by achraf            #+#    #+#             */
/*   Updated: 2023/08/08 20:17:27 by achraf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
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