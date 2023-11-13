#include "main.h"

/**
 * print_rev - This function prints a string in reverse
 * @args: The argument vector
 * Return: String
 */

int print_rev(va_list args)
{
	char *s = va_arg(args, char*);
	int a;
	int b = 0;

	if (s == NULL)
		s = "(null)";
	while (s[b] != '\0')
		b++;
	for (a = b - 1; a >= 0; a--)
		collab_putchar(s[a]);
	return (b);
}

