#include "main.h"
#include <stdio.h>
/**
* _printf - a function to replicate the workings of printf
* @format : the string entered by the user
*/

int _printf(const char *format, ...)
{	
	int sum;
	va_list ap;

	if (format == NULL)
		return (0);
	va_start(ap, format);
	sum = 0;
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
				{
				case 'd':					/* print interger function */
					sum += print_d(va_arg(ap, int));
					format++;
					break;
				case 'i':					/* print integer function */
					sum += print_int(va_arg(ap, int));
					format++;
					break;
				case 'c':					/* print character function */
					collab_putchar((char)va_arg(ap, int));
					sum++;
					format++;
					break;
				case 's':					/* print string function */
					sum += print_string(va_arg(ap, char *));
					format++;
					break;
				case 'b':					/* print binary function */
					sum += print_b(va_arg(ap, unsigned int));
					format++;
					break;
				case '%':					/* print % sign */
					collab_putchar(*format);
					sum++;
					format++;
					break;
				case 'p':					/* print pointer function */
					sum += print_pointer(va_arg(ap, void *));
					format++;
					break;
				case 'h':
					break;
				case 'H':
					break;
				case 'o':
					sum += print_octal(va_arg(ap, unsigned int));
					format++;
					break;
				default:
					sum += print_unknown(2, format);
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
/**
 *print_unkown - printf unknown format specifiers
 *@add: number of char printed
 *@format: pointer to the format specifer
 *Return: the number of char printed
 */
int print_unknown(int add,const char *format)
{
	collab_putchar('%');
	collab_putchar(*format);
	format++;
	return (add);
}

