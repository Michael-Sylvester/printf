#include "main.h"
/* *
 * _printf - a function to replicate the workings of printf
 * @format : the string entered by the user
 */

int _printf(const char *format, ...)
{
  /* va_list name, 
   * va_start(list_name, format), 
   * va_arg(list_name, next_format_specifier_data_type)
 */
  int i;
  char c;
  char * str;
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
	      /* print interger function */
	      i = va_arg(ap, int);
	       print_int(i);	
	      format++;
	      break;
	    case 'i':
	      /* print integer function */
	      i = va_arg(ap, int);
	       print_int(i);
	      format++;
	      break;
	    case 'c':
	      /* print character function */
	      c = (char)va_arg(ap, int);
	      collab_putchar(c);
	      format++;
	      break;
	    case 's':
	      /* print string function */
	      str = va_arg(ap, char *);
	      print_string(str);
	      format++;
	      break;
	    default:
	      format++;
	      break;
	    } /* end of switch statement */
	}     /* end of if statement */
      /* if keyword not available print current member of format string */
      collab_putchar(*format);
      format++;  
    } /* end of while loop */
  va_end(ap);
  return (0);
}
