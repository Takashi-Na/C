#include <stdio.h>

int main(void)
{
  const double EXCISETAX = 0.1;
  int price;

  printf("本体価格：");
  scanf("%d", &price);

  price = (int)((1 + EXCISETAX) * price);

  printf("税込価格：%d", price);
  
  return 0;
}
