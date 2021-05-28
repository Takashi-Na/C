#include<stdio.h>

int main(void)
{
  int array[9];
  int i;

  for (i = 0; i < 10; i++)
  {
    printf("%d番目の数字を入力してください。：", i + 1);
    scanf("%d", &array[i]);
  }

  for (i = 9; i >= 0; i--)
  {
    printf("%d", array[i]);
    printf("\n");
  }

  return 0;
}
