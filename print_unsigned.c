#include "main.h"

/**
 * print_ui - This function prints unsigned integer
 * @num: The unsigned integer to be printed
 * Return: integer
 */

int print_ui(unsigned int num)
{
	unsigned int rev_num = 0;
	unsigned int temp_num = num;
	int digit_count = 0;  /* variable to count the number of digits */

	if (num == 0)
	{
		collab_putchar('0');
		digit_count = 1;
	}
	else
	{
	while (temp_num > 0)
	{
		rev_num = rev_num * 10 + temp_num % 10;
		temp_num /= 10;
	}

	while (rev_num > 0)
	{
		collab_putchar((rev_num % 10) + '0');
		rev_num /= 10;
		digit_count++;
	}
	}
	return (digit_count);
}
