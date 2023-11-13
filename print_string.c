#include "main.h"

/**
 * print_string - writes string to stdout
 * @str: The character to print
 *
 * Return: the cumber of char in the string
 *
 */
int print_string(char *str)
{
	int count = 0;  /* iterates through string */

	while (str[count])
	{
		collab_putchar(str[count]);
		count++;
	} /* end of while loop */

	return (count - 1);
}
