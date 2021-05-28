#include <stdio.h>

int main(void)
{
  int i,array[10];

  printf("数字を10個入力してください");
  for (i = 0; i < 10; i++)
  {
    scanf("%d", array + i);
  }

  for (i = 9; i >= 0; i--)
  {
    printf("%d", *(array + i));
  }

  return 0;
}