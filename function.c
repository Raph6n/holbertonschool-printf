#include "main.h"
/**
 * 
 * 
 * 
 * 
 * 
 */
int print_s(va_list argu)
{
  int i = 0;
  char *string = va_arg(argu, char *);

  while (string[i] !='\0')
    {
      _putchar(string[i]);
      i++;
    }
  return (i);
}