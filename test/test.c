#include <stdio.h>
#include "../main.h"
/* main - Used to test the _printf function 
*
*Return: 0
*/

int main(void)
{
  char * str = "String pointers also work";
  char i = 'I';
  int num = 500;
  
  _printf("String literals are accepted");
  puts("");

  _printf("%s", str);
  puts("");

  _printf("%c placed in one character", i);
  puts("");

_printf("the number %d has appeared as d", num);
puts("");

_printf("the number %i has appeared again as i", num);
puts("");

_printf("%s as well as chars like \"%c\" and int like \"%d\"", str, i, num);
puts("");

return (0);
}
