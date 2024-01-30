#ifndef MAIN_H
#define MAIN_H
//includes
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
// prototypes
int print_char(char c);
int _printf(const char* format, ...);
int print_str(const char *string);
int print_int(int num);
void ft_putchar(char c);
#endif