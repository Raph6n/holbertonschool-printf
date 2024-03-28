#include "main.h"

int _printf(const char *format, ...)
{

  int i = 0, index, printall = 0;
  va_list argu;

  functions list[] = {
    {'c', print_c},
    {'s', print_s},
    {'d', print_dec},
    {'i', print_dec},
    {'%', print_prc},
    {'\0', NULL},
  };
  va_start(argu, format);

  while (format && format[i])

int _printf(const char *format, ...)
{

int i = 0, index, printall = 0;
va_list argu;

 functions list[] = {
                {'c', print_c},
                {'s', print_s},
                {'d', print_dec},
                {'i', print_dec},
                {'%', print_prc},
                {'\0', NULL},
 };
    va_start(argu, format);
    if (format == NULL || (format[i] == '%' && format[1] == '\0'))
        return (-1);
    while (format && format[i])
    {
      if (format[i] == '%' && (format[i+1] != 'K') && format [i+1] != '!')
	{
        {

	  index = 0;
	  i++;
	  while (list[index].let != '\0')

            index = 0;
            i++;
        
            while (list[index].let != '\0')

            {
	      if (list[index].let == format[i])
                {
		  printall += list[index].printf(argu);
		  break;
                }
	      index++;
            }
        }
      else
	{
	  _putchar(format[i]);
	  printall++;
	}
      i++;
    
    else
    {
        _putchar(format[i]);
        printall++;
        }
        i++;

    }
  return(printall);
}
