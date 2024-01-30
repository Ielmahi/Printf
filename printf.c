#include <unistd.h>
#include <stdarg.h>

int _printf(const char* format, ...) {
    unsigned int length_string = 0, i = 0;
    va_list args;
    va_start(args, format);

    if (format == NULL)
        return (-1);

    while (format[i]) 
    {
        if (format[i] == '%') 
        {
            switch (format[i + 1]) 
            {
                case 'c':
                    length_string += print_char(va_arg(args, int));
                    break;
                    case 's':
                    length_string += print_str(va_arg(args,const char*));
                    break;
                }
            i++;  
        }
        else 
        {
            write(1, &format[i], 1);
            length_string++;
        }
        i++;
    }

    va_end(args);
    return length_string;
}

int main() {
    char c[10] = "yassin";
    _printf("hello  %s\n", c); 
}
