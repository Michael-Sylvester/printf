#include "main.h"

/**
 * print_b - This function prints binary number
 * @val: The function param
 * Return: An integer
 */
int print_b(int num)
{
	int flag = 0;
	int count = 0;
	int x, a = 1, b;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int p;

	for (x = 0; x < 32; x++)
	{
		p = ((a << (31 - x)) & num);
	if (p >> (31 - x))
		flag = 1;
	if (flag)
	{
		b = p >> (31 - x);
		collab_putchar(b + '0');
		count++;
	}
	}
	if (count == 0)
	{
		count++;
		collab_putchar('0');
	}
	return (count);
}
