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
void ft_putchar(char c)
 {
    write(1, &c, 1);
 }
int print_int(int num) 
{
    int num_1 = num; 
    int length = 0;

      while (num) 
        {
            num /= 10;
            length++;
        }   

    if(num_1 >= 0 && num_1 < 10) 
        ft_putchar(num_1 + '0');
    else if(num_1 < 0)
    {
        ft_putchar('-');
        print_int(-num_1);
    }
    else
    {
        print_int(num_1 / 10);
        print_int(num_1 % 10);
    }

   return (length);
}
