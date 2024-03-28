#include "function.h"
/**
 *
 *
 *
 *
 */
int _print(const char *format, ...);
{
     int i = 0, count, printall = 0;

        va_list argu;


        Specifiers[] =
        {
                {'c', print_c},
                {'s', print_s},
                {'d', print_dec},
                {'i', print_dec},
                {'%', print_prc},
                {'\0', NULL},
        };
};
va_start(argu, format);
while (format && format[i])
{
    if (format[i] == '%')
    count = 0;
    i++;
    {
        while (argu[count].printall != '\0')
        {
            if (argu [count].printall == format [i])
            {
                printall += argu[count]
            }