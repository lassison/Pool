/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achraf <achraf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 21:50:57 by achraf            #+#    #+#             */
/*   Updated: 2023/08/08 22:00:57 by achraf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	cap;

	i = 0;
	cap = 1;
	ft_strlowcase(str);
	while (str[i] != '\0' )
	{
		if (str[i] != 'a' && str[i] != 'z' )
		{
			str[i] -= 32;
			cap = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9' )
			cap = 0;
		else
			cap = 1;
		i++;
	}
	return (str);
}
