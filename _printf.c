#include "main.h"
#include <stdio.h>
/**
* _printf - a function to replicate the workings of printf
* @format : the string entered by the user
* Return: number of characters printed
*/

int _printf(const char *format, ...)
{
	char letter;
	int sum = 0;
	/*int buffer_index = 0;
	char buffer[BUFF_SIZE];*/
	va_list ap;

	if (format == NULL)
		return (0);
	va_start(ap, format);
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
				default:		/* continue switch in next function */
					letter = *format;
					sum += _printf_specifier(letter, ap);
					format++;
					break;
				} /* end of switch statement */

		}     /* end of if statement */
		else
		{
			write(1, format, 1);
			sum++;
			format++;
		} /* end of else statement */
	} /* end of while loop */
	va_end(ap);
	return (sum);
}

/**
 *print_unknown - printf unknown format specifiers
 *@add: number of char printed
 *@format: pointer to the format specifer
 *Return: the number of char printed
 */
int print_unknown(char format)
{
	int sum = 0;
	sum += collab_putchar('%');
	sum += collab_putchar(format);
	return (sum);
}


/**
 *_printf_specifier - printf unknown format specifiers
 *@ap: the variable argument list containng arguments
 *@format: pointer to the format specifer
 *Return: the number of char printed
 */
int _printf_specifier(char format, va_list ap)
{
	int sum = 0;
	char c;
	unsigned int ui;
	void *vp;
	switch (format)
	{
	case 'c':                   /* print character function */
		c = (char)va_arg(ap, int);
		write(1, &c, 1);
		sum++;
		break;
	case 's':                   /* print string function */
		sum += print_s(ap);
		break;
	case 'b':                   /* print binary function */
		ui = va_arg(ap, unsigned int);
		sum += print_b(ui);
		break;
	case '%':                   /* print % sign */
		write(1, &format, 1);
		sum++;
		break;
	case 'p':                   /* print pointer function */
		vp = va_arg(ap, void *);
		sum += print_pointer(vp);
		format++;
		break;
	case 'x':
		sum += print_hex(ap);
		break;
	case 'X':
		ui = va_arg(ap, unsigned int);
		sum += print_hex_more(ui);
		break;
	default:
		sum += _printf_specifier2(format, ap);
		break;
	}
	return (sum);
}

/**
 *_printf_specifier2 - printf unknown format specifiers
 *@ap: the variable argument list containng arguments
 *@format: pointer to the format specifer
 *Return: the number of char printed
 */
int _printf_specifier2(char format, va_list ap)
{
	int sum = 0;
	unsigned int ui;
	char c;
	
	switch (format)
		{
		case 'o':
			ui = va_arg(ap, unsigned int);
			sum += print_octal(ui);
			break;
		case 'r':
			sum += print_rev(ap);
			break;
		case 'R':
			sum += print_rot13(ap);
			break;
		case 'u':
			break; 
		default:
			/*sum += print_unknown(format);*/
			c = '%';
			if (format != '\0')
			{
			write(1, &c, 1);
			write(1, &format, 1);
			sum += 2;
			}
			break;
		}
	return (sum);
}
