#include <stdio.h>
#include <stdlib.h>
char **ft_split(char *str)
{
    int i;
    int i_matrix;
    int word_count;
    int loc;
    char **matrix;

    i = 0;
    loc = 0;
    i_matrix = 0;
    word_count = 1;
    while (str[i])
    {
        while ((str[i]) && (str[i] <= 32))
            i++;
        if ((str[i]) && (str[i] > 32))
            word_count++;
        while ((str[i]) && (str[i] > 32))
            i++;
    } 
    matrix = malloc(sizeof(char *) * word_count);
    i = 0;
    word_count = 0;
    while (str[i])
    {
        while ((str[i]) && (str[i] <= 32))
            i++;
        while ((str[i]) && (str[i] > 32))
        {
            word_count++;
            i++;
        }
        if (word_count)
            matrix[loc] = malloc(sizeof(char) * (word_count + 1));
        else 
            break;
        printf("i antes: %d\n" , i);
        i = i - word_count;
        while (word_count)
        {
            matrix[loc][i_matrix] = str[i];
            i++;
            i_matrix++;
            word_count--;
        }
        matrix[loc][i_matrix] = '\0';   
        i_matrix = 0;
        loc++;
    }
    matrix[loc] = NULL;
    return(matrix);
}

int main()
{
    int i;
    char **matrix;
    char    str[] = "  starting and ending   ";

    i = 0;
    matrix = ft_split(str);
    while (i < 6)
    {
        printf("%s|\n" , matrix[i]);
        i++;
    }
    
    return(0);
}