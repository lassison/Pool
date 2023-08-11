/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achraf <achraf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 19:50:22 by achraf            #+#    #+#             */
/*   Updated: 2023/08/11 22:12:25 by achraf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	sorted;
	int	temp;
	int	i;

	i = 0;
	sorted = 0;
	while (!sorted)
	{
		sorted = 1;
		while (i < size - 1)
		{
			if (tab[i] > tab[i +1])
			{
				temp = tab[i];
				tab[i] = tab[i +1];
				tab[i +1] = temp;
				sorted = 0;
			}
			i++;
		}
	}
}
