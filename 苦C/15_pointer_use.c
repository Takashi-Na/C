#include<stdio.h>

// プロトタイプ宣言
void func(int *p_value);

int main(void)
{
  int value = 10;
  printf("value \t= %d\n", value);
  printf("&value \t= %p\n", &value);
  // アドレスを渡す
  func(&value);
  printf("value \t= %d\n", value);
  return 0;
}

void func(int *p_value)
{
  printf("p_value = %p\n", p_value);
  // 通常変数モードに切り替えて代入
  *p_value = 100;
  return;
}
