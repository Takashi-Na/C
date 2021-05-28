#include <stdio.h>

int square(int *num);

int main(void)
{
  int num;

  printf("数字を入力してください:");
  scanf("%d", &num);

  square(&num);
  printf("%d", num);

  return 0;
}

int square(int *num)
{
  *num = *num * *num;
  return 0;
}
