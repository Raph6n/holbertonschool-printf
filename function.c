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
    _putchar(37);

    return (1);
}
int print_dec(va_list argu)
{
    int n = va_arg(argu, int);
    int recur = 0, symbol = n < 0;
    int count = 0;
    if (symbol) {
        _putchar('-');
        count++;
        n = -n;
    }
    while (n != 0) {
        recur = recur * 10 + (n % 10);
        n /= 10;
    }
    while (recur != 0) {
        _putchar((recur % 10) + '0');
        recur /= 10;
        count++;
    }
    if (count == 0 || (count == 1 && symbol)) {
        _putchar('0');
        count++;
    }
    return count;
}