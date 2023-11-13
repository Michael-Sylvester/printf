#include "main.h"

/**
 * print_hexadecimal - This prints an unsigned number in hexadec
 * @types: The list of arguments passed
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: To get width
 * @precision: Precision specification
 * @size: Size specification
 * Return: The num of chars printed
 */
int print_hexadecimal(va_list types, char buffer[],
int flags, int width, int precision, int size)
{
	return (print_hexa(types, "0123456789abcdef", buffer, flags,
'x', width, precision, size));
}

/**
 * print_hexa_upper - This  prints an unsigned num in upper hexadec
 * @types: The list of arguments passed
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: To get width
 * @precision: Precision specification
 * @size: Size specification
 * Return: The num of chars printed
 */
int print_hexa_upper(va_list types, char buffer[],
int flags, int width, int precision, int size)
{
	return (print_hexa(types, "0123456789ABCDEF", buffer, flags,
'X', width, precision, size));
}

/**
 * print_hexa - This prints a hexadec number in lower or upper
 * @types: The list of arguments passed
 * @map_to: Array of values to map the num
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @flag_ch: Calculates active flags
 * @width: To get width
 * @precision: Precision specification
 * @size: Size specification
 * Return: The num of chars printed
 */
int print_hexa(va_list types, char map_to[], char buffer[],
int flags, char flag_ch, int width, int precision, int size)
{
	int x = BUFF_SIZE - 2;
	unsigned long int num = va_arg(types, unsigned long int);
	unsigned long int init_num = num;

	UNUSED(width);
	num = convert_size_unsgnd(num, size);
	if (num == 0)
	buffer[x--] = '0';
	buffer[BUFF_SIZE - 1] = '\0';
	while (num > 0)
	{
		buffer[x--] = map_to[num % 16];
		num /= 16;
	}
	if (flags & F_HASH && init_num != 0)
	{
		buffer[x--] = flag_ch;
		buffer[x--] = '0';
	}

	x++;
	return (write_unsgnd(0, x, buffer, flags, width, precision, size));
}
