int ft_str_is_printable(char *str)
{
    int i = 0;

    while ( str[i] != '\0')
    {
        if ( str[i] >= 32 && str[i] <= 127)
        {
            return 1;
        }
        else
        {
            return 0;
        }
        
    }
    return 1;
}