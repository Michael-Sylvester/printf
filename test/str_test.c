#include "../main.h"
#include <stdio.h>
#include <string.h>
int main(void)
{
  char *str2 = "Why_Why_?_";

  int ans = 0;

  ans = _printf("%s", str2);

  _printf("  Direct Total = %i\n", ans);


    ans =  _printf("%s", "Why_Why_?_");

   _printf("  string Total = %i", ans);

  /*

  ans = printf("1. %s", str_1);
  printf("\n Total = %i\n", ans);

  ans = printf("2. %s", str_2);
  printf("\n Total = %i\n", ans);
  */
  return (0);
}
