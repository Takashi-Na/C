#include <stdio.h>
#define EXCISETAX 0.1
#define AUTHOR "高橋"

int main(void)
{
  int price;
  printf("本体価格：");
  scanf("%d", &price);

  price = (int)((1 + EXCISETAX) * price);

  printf("税込価格：%d\n", price);
  printf("製作者：%s\n", AUTHOR);

  return 0;
}
