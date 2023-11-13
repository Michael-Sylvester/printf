#include "main.h"
#include <stdio.h>
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
  int sum = 0;
  unsigned int b;
  
  char c;
  char * str;
  void *p;
  va_list ap;
  
  if (format == NULL)
    return (0);
  
  va_start(ap, format);
  sum = 0;
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
	      sum += print_d(i);
	      format++;
	      break;

	    case 'i':
	      /* print integer function */
	      i = va_arg(ap, int);
	      sum += print_int(i);
	      format++;
	      break;

	    case 'c':
	      /* print character function */
	      c = (char)va_arg(ap, int);
	      collab_putchar(c);
	      sum++;
	      format++;
	      break;

	    case 's':
	      /* print string function */
	      str = va_arg(ap, char *);
	      if (str != NULL)
	      sum += print_string(str);
	   
	      format++;
	      break;

            case 'b':
              /* print binary function */
              b = va_arg(ap, unsigned int);
              sum += print_b(b);
	      format++;
	      break;

	    case '%':
	      /* print % sign */
	      collab_putchar(*format);
	      sum++;
	      format++;
	      break;
	    case 'p':
	      /* print pointer function */
	      p = va_arg(ap, void *);
	      sum += print_pointer(&p);
	      format++;
	      break;
	    default:
	      collab_putchar('%');
	      collab_putchar(*format);
	      format++;
	      sum += 2;
	      break;
	    } /* end of switch statement */
	}     /* end of if statement */
      /* if keyword not available print current member of format string */
      collab_putchar(*format);
      sum++;
      format++;  
    } /* end of while loop */
  va_end(ap);


  return (sum);
}
