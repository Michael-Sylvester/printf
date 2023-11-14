#include "main.h"

/**
 * print_s - This function prints a string.
 * @val: The argument passed
 * Return: the length of the string
 */

int print_s(va_list args)
{
	const char *arg = va_arg(args, const char *);
	int len_s = 0;

	if (arg == NULL)
	{
		arg = "(null)";
	}

	while (arg[len_s] != '\0')
	{
		len_s++;
	}
	write(1, arg, len_s);
	return (len_s);
}
