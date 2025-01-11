int    ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while ((s1[i]) && (s2[i]))
    {
        if(s1[i] < s2[i])
            return(-1);
        if(s1[i] > s2[i])
            return(1);
        i++;
    }
    return(0);
}
#include <stdio.h>
int main()
{
    char s1[] = "aaa";
    char s2[] = "aab";
    int result;

    result = ft_strcmp(s1, s2);
    printf("aqui está o reusltado da comp %d\n" , result);
    return (0);   
}