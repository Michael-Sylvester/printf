#include "main.h"

/**
 * _print_string - writes string to stdout
 * @str: The character to print
 *
 * Return: the cumber of char in the string
 * 
 */
int print_string(char * str)
{
  int count = 0; 			/* iterates through string */

  if (str != NULL)
    {
  while(str[count] != '\0')
    {
      collab_putchar(str[count]);
      count++;
    } /* end of while loop */
    } /* end of if statement */

  return (count);
}
