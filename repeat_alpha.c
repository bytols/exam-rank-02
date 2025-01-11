#include <unistd.h>
int main(int argc, char *argv[])
{
    int i;
    int repeat;

    i = 0;
    repeat = 0;

    if (argc != 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    while (argv[1][i])
    {
        if((argv[1][i] >= 'a') && (argv[1][i] <= 'z'))
        {
            while (repeat < (argv[1][i]) - 96)
            {
                write(1, &argv[1][i], 1);
                repeat++;   
            }
            i++;
            repeat = 0;
            continue;
        }
        else if((argv[1][i] >= 'A') && (argv[1][i] <= 'Z'))
        {
            while (repeat < (argv[1][i]) - 64)
            {
                write(1, &argv[1][i], 1);
                repeat++;   
            }
            i++;
            repeat = 0;
            continue;
        }
        write(1, &argv[1][i], 1);
        i++;
    }
    write(1, "\n", 1);
    return(1);
    
}