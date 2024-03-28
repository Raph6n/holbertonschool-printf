#include "main.h"

/**
 * p_int_rec - print int digits
 * @n: number
 * @count: digits counter
 * Return: return the digits counter
*/

int print_recursion_decimal(int n)
{
	int i = 1;
	if (n / 10)
	{
		i += print_recursion_decimal(n / 10);
	}
	_putchar(n % 10 + '0');
	return (i);
}

int print_decimal(va_list ap)
{
	int i = 0, n = 0;
	n = va_arg(ap, int);
	if (n < 0)
	{
		_putchar ('-');
		n = (-1)* n;
		i++;
	};
	i += print_recursion_decimal(n);
	return (i);

}
