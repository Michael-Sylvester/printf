#include "main.h"

/**
 * print_s - This function prints a string.
 * @val: The argument passed
 * Return: the length of the string
 */

int print_s(va_list val)
{
	char *s;
	int x, len;
	int *p_len = &len;
	s = va_arg(val, char *);
	if (s == NULL)
		s = "(null)";

	len = strlen(s);
	for (x = 0; x < len; x++)
		collab_putchar(s[x]);

	return (*p_len + 1);
}
