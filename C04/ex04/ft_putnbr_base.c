/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achraf <achraf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 19:05:46 by achraf            #+#    #+#             */
/*   Updated: 2023/08/11 19:05:48 by achraf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	base_errors(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || ft_strlen(base) == 1)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (j < ft_strlen(base))
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;
	int	result;

	len = ft_strlen(base);
	if (base_errors(base) == 0)
	{
		return ;
	}
	if (nbr < 0) 
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr >= len) 
	{
		ft_putnbr_base(nbr / len, base);
	}
	result = base[nbr % len];
	write(1, &result, 1);
}
