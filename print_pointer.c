#include "main.h"

/**
 * print_pointer - This function prints the address a pointer points to.
 * @ptr: The argument to print
 * Return: An integer
 */

int print_pointer(void *ptr)
{
	/* Cast the pointer to an unsigned long */
	unsigned long address = (unsigned long)ptr;
	int count = 0;
	int i;
	int hex_digit;
	/* Print the address in hexadecimal format */
	collab_putchar('0');
	collab_putchar('x');

	if (ptr != NULL)
	{
		/* Print the hexadecimal digits of the address */
		for (i = (sizeof(ptr) * 2 - 1) * 4; i >= 0; i -= 4)
		{
			hex_digit = (address >> i) & 0xF;

			if (hex_digit < 10)
			{
				collab_putchar(hex_digit + '0');
			}
			else
			{
				collab_putchar(hex_digit + 'a' - 10);
			}
			count++;
		}

		/* If the address was zero, print a '0'*/
		if (count == 0)
		{
			collab_putchar('0');
			count++;
		}
	}
	return (count);
}
