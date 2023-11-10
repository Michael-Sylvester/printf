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
  int ans = 0;
  
ans = _printf("String literals are accepted");
 printf("\tTotal = %i\n", ans);

  _printf("%s", str);
  printf("\tTotal = %i\n", ans);

  _printf("%c placed in one character which was \"I\"", i);
  printf("\tTotal = %i\n", ans);

_printf("the number %d has appeared as d", num);
 printf("\tTotal = %i\n", ans);

_printf("the number %i has appeared again as i", num);
 printf("\tTotal = %i\n", ans);

_printf("%s as well as chars like \"%c\" and int like \"%d\"", str, i, num);
 printf("\tTotal = %i\n", ans);

return (0);
}
