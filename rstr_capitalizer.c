#include <unistd.h>
#include <stdio.h>

void captalize(char *str, int word_count, int string_count)
{
    string_count = string_count - word_count;
    while ((word_count - 1) > 0)
    {
        if((str[string_count] > 64) && (str[string_count] < 91))
            str[string_count] = str[string_count] + 32;
        write(1, &str[string_count], 1);
        word_count--;
        string_count++;
    }
    if((str[string_count] > 96) && (str[string_count] < 123) && (str[string_count] != '\0'))
    {
        str[string_count] = str[string_count] - 32;
        write(1, &str[string_count], 1);
    }
    else
    {
        write(1, &str[string_count], 1);
    }
}

int main(int argc, char *argv[])
{
    int param;
    int word_count;
    int i;

    param = 1;
    i = 0;
    word_count = 0;
    if(argc < 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    while (param < argc)
    {
        i = 0;
        while (argv[param][i] != '\0')
        {
            while ((argv[param][i] < 33) && (argv[param][i] != '\0'))
            {
                write(1, &argv[param][i], 1);
                i++;
            }
            while ((argv[param][i] > 33) && (argv[param][i] != '\0'))
            {        
                word_count++;
                i++;
            }
            if(word_count > 0)
                captalize(argv[param], word_count, i);
            word_count = 0;
        }
        param++;
        write(1, "\n", 1);
    }
}