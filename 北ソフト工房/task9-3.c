#include <stdio.h>

void comparsion(int i, int j);

int main(void)
{
  int i, j;

  printf("２つの数を比較します。\n");
  printf("A:");
  scanf("%d", &i);
  printf("B:");
  scanf("%d", &j);

  comparsion(i, j);

  return 0;
}

void comparsion(int i, int j)
{
  if (i < j) {
    printf("大きい方：%d", j);
  } else if (i > j) {
    printf("大きい方：%d", i);
  } else {
    printf("同じ数です");
  }
  return;
}
