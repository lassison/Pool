#include <unistd.h>
#include <stdio.h>
#include <string.h>

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
    char src[] = "Beautiful";
	char src1[] = "beautiful";
	char dest[] = "Wo";
	char dest1[] = "";
    ft_strcpy(dest, src);
	printf("%s\n", dest);

    strcpy(dest1, src1);
	printf("%s\n", dest1);
}