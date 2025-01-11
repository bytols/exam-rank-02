#include <unistd.h>
int main(int argc, char *argv[])
{
    int i;
    int count;

    i = 0;
    count = 0;
    if(argc != 2)
    {
        write(1, "\n", 1);
        return (1);
    }
    while (argv[1][i])
    {
        if(((argv[1][i] >= 'a') && (argv[1][i] <= 'z')))
        {
            while(count < 13)
            {
                argv[1][i] = argv[1][i] + 1;
                if (argv[1][i] > 122)
                    argv[1][i] = 97;
                count++;
            }
            count = 0;
            write(1, &argv[1][i], 1);
            i++;
            continue;
        }
        else if(((argv[1][i] >= 'A') && (argv[1][i] <= 'Z')))
        {
            while(count < 13)
            {
                argv[1][i] = argv[1][i] + 1;
                if (argv[1][i] > 90)
                    argv[1][i] = 65;
                count++;
            }
            count = 0;
            write(1, &argv[1][i], 1);
            i++;
            continue;
        }
        write(1, &argv[1][i], 1);
        i++;
    }
    write(1, "\n", 1);
    
}