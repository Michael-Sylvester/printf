#include "../main.h"
#include <stdio.h>

int main(void)
{
  int sum = 0;
  char *s = "I do?"; 
sum = print_string("Yam");
  printf("\tTotal %i\n", sum);
 
  sum = print_string("%s real",s);
  printf("\tTotal %i\n", sum);
  
  return (0);
}
