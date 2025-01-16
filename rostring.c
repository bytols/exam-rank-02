#include <unistd.h>

int main(int argc, char *argv[])
{
    int i;
    int word_spaces;
    int word_size;
    int word_after_spaces;

    i = 0;
    word_size = 0;
    word_spaces = 0;
    word_after_spaces = 0;
    if(argc < 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    while((argv[1][i] <= 32) && (argv[1][i]))
    {
        i++;
        word_spaces++;
    }
    while((argv[1][i] > 32) && (argv[1][i]))
    {
        word_size++;
        i++;
    }
    while((argv[1][i] <= 32) && (argv[1][i]))
    {
        word_after_spaces++;
        i++;
    }
    while(argv[1][i])
    {
        if((argv[1][i] <= 32))
        {
            while((argv[1][i] <= 32) && (argv[1][i])) 
                i++;
            if(argv[1][i])
                write(1, " ", 1);
        }
        if(argv[1][i])
            write(1, &argv[1][i], 1);
        else
            break;
        i++;
    }
    i = word_spaces;
    while(i < (word_size + word_spaces))
    {
        if((i == word_spaces) && (argv[1][(word_after_spaces + word_size + word_spaces)]))
            write(1, " ", 1);
        if(argv[1][i])
            write(1, &argv[1][i], 1);
        i++;
    }
    write(1, "\n", 1);
    return (0);
}