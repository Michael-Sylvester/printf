#include "main.h"
/**
 *print_unkown - printf unknown format specifiers
 *@add: number of char printed
 *@format: pointer to the format specifer
 *Return: the number of char printed
 */
int _printf_specifier(const char* format, va_list ap)
{
	int sum = 0;
	switch (*format)
		{
		case 'd':
			sum += print_d(va_arg(ap, int));
			format++;
			return (sum);
		default:
			return (0);
		}

}
