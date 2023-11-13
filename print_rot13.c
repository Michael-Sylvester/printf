#include "main.h"
/**
 * print_rot13 - This function convert to rot13
 * @args: The arguments passed
 * Return: counter
 */

int print_rot13(va_list args)
{
	int x, y, counter = 0;
	int z = 0;
	char *s = va_arg(args, char*);
	char al[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char bl[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (s == NULL)
		s = "(null)";
	for (x = 0; s[x]; x++)
	{
		z = 0;
		for (y = 0; al[0] && !k; y++)
		{
			if (s[x] == al[y])
			{
				_putchar(bl[y]);
				counter++;
				z = 1;
			}
		}
		if (!z)
		{
			_putchar(s[x]);
			counter++;
		}
	}
	return (counter);
}
