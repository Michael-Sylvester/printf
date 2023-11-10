#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "print.h"
/* *
 * myprintf - a function to replicate the workings of printf
 * @format : the string entered by the user
 */

void myprintf(const char *format, ...)
{
  /* va_list name, 
   * va_start(list_name, format), 
   * va_arg(list_name, next_format_specifier_data_type)
 */
  va_list ap;
  va_start(ap, format);
  while(*format != '\0')
    {
      if(*format == '%')
	{
	  format++;
	  switch (*format)
	    {
	    case 'd':
	      /* print intreger function */
	      break;
	    case 'i':
	      /* print integer function */
	      break;
	    case 'c':
	      /* print character function */
	      break;
	    case 's':
	      /* print string function */
	      break;
	    case 'u':
	      /* print unsigned int function */
	      break;
	    case 'x':
	      /* prints unsigned int in hexadecimal function*/
	      break;
	    case 'f':
	      /* print floatinf point number function */
	      break;
	    case 'p':
	      /* print pointer fucntion */
	      break;
	    }
	}     /* if keyword not available print current member of format  */
      _putchar(*format);
      format++;  
    }
  va_end(ap);
}
