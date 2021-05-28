#include<stdio.h>

int main(void)
{
  int l_price;
  printf("定価を入力してください。：");
  scanf("%d", &l_price);
  printf("1割引：%d円\n3割引：%d円\n5割引：%d円\n8割引：%d円\n", (int)(l_price * 0.9), (int)(l_price * 0.7), (int)(l_price * 0.5), (int)(l_price * 0.2));
  return 0;
}
