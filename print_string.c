#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _print_string - writes string to stdout
 * @str: The character to print
 *
 * Return: On success 1.
 * 
 */
void print_string(char * str)
{
  int x = 0; 			/* iterates through string */

  if (str != NULL)
    {
  while(str[x] != '\0')
    {
      _putchar(str[x]);
      x++;
    } /* end of while loop */
    } /* end of if statement */
}
