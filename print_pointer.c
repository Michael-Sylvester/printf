#include "main.h"

/**
 * print_pointer - This function prints the address a pointer points to.
 * @ptr: The argument to print
 * Return: An integer
 */

int print_pointer(void *ptr)
{
  unsigned long address = (unsigned long)ptr; /* Cast the pointer to an unsigned long */
  int count = 0;
  int i;
  int hex_digit;
  /* Print the address in hexadecimal format */
  collab_putchar('0');
  collab_putchar('x');

  /* Print the hexadecimal digits of the address */
  for (i = (sizeof(void*) * 2 - 1) * 4; i >= 0; i -= 4) {
    hex_digit = (address >> i) & 0xF;

    if (hex_digit < 10)
      collab_putchar(hex_digit + '0');
    else
      collab_putchar(hex_digit + 'a' - 10);

    count++;
  }

  return count;


}
