#include<stdio.h>

int main()
{
  // ポインタ変数pにiのポインタを代入
  int *p;
  int i;
  p = &i;

  // ポインタの表示
  printf("p \t= %p\n", p);
  printf("&i \t= %p\n", &i);

  // 通常変数モードに切替
  *p = 10;
  printf("p \t= %d\n", *p);
  printf("i \t= %d\n", i);

  return 0;
}