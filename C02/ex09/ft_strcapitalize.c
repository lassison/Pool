char *ft_strlowcase(char *str)
{
	int	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
		i++;
	}
	return str;
}

char *ft_strcapitalize(char *str)
{
    int i = 0, j = 1;
    ft_strlowcase(str);

    if ( str[i] == '')
	{
		/* code */
	}
	
}