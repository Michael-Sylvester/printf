#include "main.h"

/**
 * print_unsigned - Prints an unsigned number to a buffer.
 * @types: The list of arguments passed.
 * @buffer: Buffer array to handle print.
 *
 * Return: The number of chars printed.
 */
int print_unsigned(va_list types, char buffer[])
{
	int x = BUFF_SIZE - 2;  /* Start index for writing in the buffer */
	unsigned long int num = va_arg(types, unsigned long int);

/* Handle the case when the number is 0 */
	if (num == 0)
	buffer[x--] = '0';

	buffer[BUFF_SIZE - 1] = '\0';  /* Null-terminate the buffer */

/* Convert and write the number to the buffer in reverse order */
	while (num > 0)
	{
		buffer[x--] = (num % 10) + '0';
		num /= 10;
	}

	x++;
/* Call the function to write the buffer to a destination */
	return (write_unsgnd(x, buffer));
}
