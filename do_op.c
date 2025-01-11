#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(int argc , char *argv[])
{
    int num1;
    int num2; 

    if(argc != 4)
    {
        write(1, "\n", 1);
        return (1);
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[3]);

    if(argv[2][0] == '+')
    {
        printf("%d\n" , (num1 + num2));
        return (0);
    }
    if(argv[2][0] == '-')
    {
        printf("%d\n" , (num1 - num2));
        return (0);
    }
    if(argv[2][0] == '*')
    {
        printf("%d\n" , (num1 * num2));
        return (0);
    }
    if(argv[2][0] == '/')
    {
        printf("%d\n" , (num1 / num2));
        return (0);
    }
    if(argv[2][0] == '%')
    {
        printf("%d\n" , (num1 % num2));
        return (0);
    }    
}