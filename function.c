#include "main.h"

/**
 * print_c - function that display a character
 * @ap: va list
 * Return: 1 success.
*/

int print_c(va_list argu)
{
    int i;

    i = va_arg(argu, int);

    _putchar(i);

    return(1);
}

/**
 * print_s - function that print a strings
 * @ap: va list
 * Return: string characters
*/

int print_s(va_list argu)
{
    char *str;
    int len;

    str = va_arg(argu, char *);

    if (str == NULL){
        str = "(null)";
    }

    for (len = 0; str[len] != '\0'; len++)
    {
        _putchar(str[len]);
    }
    return (len);
}

/**
 * print_prc - function that print %.
 * @ap: va list
 * 
*/

int print_prc(va_list argu)
{
    (void) argu;
    _putchar('%');

    return (1);
}

int print_recursion_dec(int n)
{
    int i = 1;
    if (n / 10)
    {
        i += print_recursion_dec(n / 10);
    }
    _putchar(n % 10 + '0');
    return (i);
}

/**
 * print_dec - print a decimal (base 10) number
 * @ap: va list
 * Return: 1 success
 */
int print_dec(va_list argu)
{
        int i = 0, n = 0;
        n = va_arg(argu, int);
        if (n < 0)
        {
            _putchar ('-');
            n = (-1)* n;
            i++;
        };
        i += print_recursion_dec(n);
        return (i);
        
}