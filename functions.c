#include "function.h"
#include <stdarg.h>

int print_s(va_list argu)

  {
    int i = 0; /* count char */
    char *string = va_arg(argu, char *); /* argu is where find args and char * the type */
    while (string[i] !='\0') /* while not the end of the string */
    {
      _putchar(string[i]); /* print char*/
      i++;
    }
    return (i); /* return result */
}

int recursiveforint(unsigned int nbr)
{
  int count = 0;
  if (nbr / 10)
    {
      count += recursiveforint(n /10);
    }
  _putchar (nbr % 10 + '0');
  count++;
  return (count);
}
int print_dec(va_list argu)
{
  int nbr = va_arg(argu, int)
    int count = 0;

  if (nbr < 0)
    {
      _putchar('-');
      count++;
      count += recursiveforint(-(unsigned int)nbr));
}
 else
   {
     count += recursiveforint(nbr);

     return (count);
   }
  
		 
  
 
