#include <unistd.h>
#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
    int i = 0;
    while ( src[i] != '\0' )
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

int main ()
{
    char dest[] = "";
    char src[7] = "Source";
    ft_strcpy(dest, src);
    printf("%s", dest);
}