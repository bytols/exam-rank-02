#include <unistd.h>

int ft_atoi(char *str)
{
    int i;
    int nbr;

    i = 0;
    nbr = 0;
    while (str[i] <= 32)
        i++;
    while(str[i] > 32)
    {
        nbr = nbr * 10 + (str[i] - '0');
        i++;
    }
    return(nbr);
}

void print_hex(int num)
{
    char hex[] = "0123456789abcdef";
    if(num < 16)
    {
        write(1, &hex[num], 1);
    }
    else
    {
        print_hex((num / 16));
        print_hex((num % 16));
    }
}

int main(int argc, char  *argv[])
{
    int nbr;

    if(argc != 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    nbr = ft_atoi(argv[1]);
    print_hex(nbr);
    write(1, "\n", 1);
}

