#include "main.h"

/**
 * print_ui - This function prints an integer
 * @n: Arguments to print
 * Return: An unsigned integer
 */
int print_ui(unsigned int n)
{
	unsigned int num;
	int last_num = n % 10;
	int digit;
	int power_of_10 = 1;
	int count = 1;  /* initialized count to 1 */

	n = n / 10;
	num = n;

	if (num > 0)
	{
	while (num / 10 != 0)
	{
		power_of_10 = power_of_10 * 10;
		num = num / 10;
	}
	num = n;
	while (power_of_10 > 0)
	{
		digit = num / power_of_10;
		collab_putchar(digit + '0');
		num = num - (digit * power_of_10);
		power_of_10 = power_of_10 / 10;
		count++;
	}
	}
	collab_putchar(last_num + '0');
	return (count);
}
