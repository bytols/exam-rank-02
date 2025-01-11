#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return(i);
}

char    *ft_strrev(char *str)
{
    int count;
    int i;
    int rep;
    char    temp;

    i = 0;
    count = ft_strlen(str);
    rep = count / 2;
    count--;
    while (rep > 0)
    {
        temp = str[i];
        str[i] = str[count];
        str[count] = temp;
        count--;
        i++;
        rep--;
    }
    return(str);
}
/*int main()
{
    char    string[] = "";
    char    *ptr;
    ptr = ft_strrev(string);
    printf("\n%s\n" , ptr);
}*/