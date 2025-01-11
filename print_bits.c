#include <unistd.h>
#include <stdio.h>

void    print_bits(unsigned char octet)
{
    int oct;
    unsigned char num;

    printf("aqui está o numero: %c\n" , octet);
    oct = 8;
    while (oct-- > 0)
    {
        num = ((octet >> oct) & 1);
        num = num + '0';
        write(1, &num, 1);
    }
}

int main(int argc, char *argv[])
{
    (void) argc;

    print_bits(argv[1][0]);
}
