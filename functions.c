#include "main.h"

/**
 * print_hexa - calculates the num of hexa digits and allocates memory
 * @num: number to convert
 * @counter: The pointer to store the count of hexa digits.
 * Return: array of hex digits.
 */
int *print_hexa(unsigned int num, int *counter)
{
	int x;
	int *array;
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		(*counter)++;
	}
	(*counter)++;
	array = malloc((*counter) * sizeof(int));

	for (x = 0; x < (*counter); x++)
	{
		array[x] = temp % 16;
		temp /= 16;
	}

	return (array);
}

/**
 * print_hex - This prints a hexa num
 * @val: The arguments passed
 * Return: counter
 */
int print_hex(va_list val)
{
	int counter = 0;
	unsigned int num = va_arg(val, unsigned int);
	int *array = print_hexa(num, &counter);
	int x;

	for (x = counter - 1; x >= 0; x--)
	{
		if (array[x] > 9)
		array[x] += 7;
		collab_putchar(array[x] + '0');
	}

	free(array);
	return (counter);
}

/**
 * print_hex_more - This prints a hexa num
 * @num: The parameter
 * Return: counter
 */
int print_hex_more(unsigned int num)
{
	int counter = 0;
	int *array = print_hexa(num, &counter);
	int x;

	for (x = counter - 1; x >= 0; x--)
	{
		if (array[x] > 9)
		array[x] += 7;
		collab_putchar(array[x] + '0');
	}

	free(array);
	return (counter);
}
