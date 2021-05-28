#include <stdio.h>

void average(int i, int j);

int main(void)
{
  int i, j;

  printf("２つの数の平均を出します(小数切り捨て)");
  scanf("%d", &i);
  scanf("%d", &j);

  average(i, j);

  return 0;
}

void average(int i,int j)
{
  int average;

  average = (i + j) / 2;
  printf("平均：%d", average);
  return;
}