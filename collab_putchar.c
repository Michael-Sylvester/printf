#include <unistd.h>
#include "main.h"
/**
 * collab_putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int collab_putchar(char c)
{
  return (write(1, &c, 1));
}
