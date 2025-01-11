#include <unistd.h>
int ft_atoi(char *str)
{
    int i;
    int num;

    i = 0;
    num = 0;
    while (str[i])
    {
        while(str[i] <= 30)
            i++;
        if((str[i] == '+') || (str[i] == '-'))
        {
            if(str[i] == '-')
                return (-1);
            i++;
        }
        while ((str[i]) && (str[i] >= '0') && (str[i] <= '9') )
        {
            num = num * 10 + (str[i] - '0');
            i++;
        }
    }
    return(num);
    
}

int is_prime(int nbr)
{
    int div;

    div = 2;
    while (div < nbr)
    {
        if ((nbr % div) == 0)
            return (0);
        div++;
    }
    return(nbr);
    
}

void put_nbr(int num)
{
    if(num < 10)
    {
        num = num + '0';
        write(1, &num, 1);
        return ;
    }
    else
    {
        put_nbr(num / 10);
        put_nbr(num % 10);
    }
}

int main(int argc, char *argv[])
{
    int prime_sum;
    int num;

    prime_sum = 0;
    if(argc != 2)
    {
        write(1, "0\n", 2);
        return (0);
    }
    num = ft_atoi(&argv[1][0]); 
    if (num == -1)
    {
        write(1, "0\n", 2);
        return (0);
    }
    while(num > 1)
    {
        if(is_prime(num))
            prime_sum = prime_sum + num;
        num--;
    }
    put_nbr(prime_sum);
    write(1, "\n", 1);
}