#include <stdio.h>

int main(void)
{
  char str[] = "hello wold";

  // "h"と"w"を大文字に変える
  // str[0] = 'H';
  // str[6] = 'W';
  // はダメ

  *str = ('a' - 'A');
  *(str + 6) -= ('a' - 'A');

  printf("%s\n", str);

  return 0;
}
