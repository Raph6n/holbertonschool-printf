#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdarg.h>

typedef struct printf
{
    char let;
    int (*printf)(va_list argu);
}
functions;

int _printf(const char *format, ...);
int print_c(va_list argu);
int print_s(va_list argu);
int print_prc(va_list argu);
int print_dec(va_list argu);
int _putchar(char c)
#endif