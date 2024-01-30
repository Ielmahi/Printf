#include "main.h"
int print_char(char c) 
{
    write(1, &c, 1);
    return 1;
}
int print_str(const char *string)
{
    int i = 0;
    while(string[i])
    {
        write(1, &string[i], 1);
        i++;
    }
    return (i);
}