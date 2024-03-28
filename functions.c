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

  
		 
  
 
