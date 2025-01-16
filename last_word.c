#include <unistd.h>
#include <stdio.h>
int main(int argc, char *argv[])
{
    int i;
    int space_count;
    int word_count;

    i = 0;
    if(argc != 2)
    {
        write(1, "\n", 1);
        return(0);
    }
    if(argv[1][0] == '\0')
    {
        write(1, "\n", 1);
        return(0);       
    }    
    while((argv[1][i]) && (argv[1][i] > 32))
        i++;
    while(argv[1][i])
    {
        word_count = 0;
        while((argv[1][i]) && (argv[1][i] > 32))
        {
            word_count++;
            i++;
        }
        space_count = 0;
        while((argv[1][i]) && (argv[1][i] <= 32)) 
        {
            space_count++;
            i++;
        }
    }
    i = i - word_count - space_count;
    while((argv[1][i]) && (argv[1][i] > 32))
    {
        write(1, &argv[1][i], 1);
        i++;
    }
    write(1, "\n", 1);
    return(0);
}