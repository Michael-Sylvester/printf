#include "main.h"

/**
 * print_octal - This function converts int to octal and prints it
 * @val: Arguments to print
 * Return: An integer
 */
int print_octal(unsigned int val)
{
	int count = 0;
	int i;
	char octal_digits[32];
	/* Assuming a maximum of 32 octal digits for an unsigned long*/

	/*Convert the value to octal and store the digits in octal_digits*/
	while (val != 0)
	{
		octal_digits[count] = '0' + (val % 8);
		val /= 8;
		count++;
	}

	/* Print the octal digits in reverse order*/
	for (i = count - 1; i >= 0; i--)
	{
		collab_putchar(octal_digits[i]);
	}

	return (count);
}
