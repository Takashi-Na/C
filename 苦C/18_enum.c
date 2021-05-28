#include <stdio.h>

// week型の定義
typedef enum enm
{
  Sun,
  Mon,
  Tue,
  Wed,
  Thu,
  Fri,
  Sat,
} week;

int main(void)
{
  // week型の宣言
  week wk0, wk1, wk2;

  // week型のメンバを代入
  wk0 = Sun;
  wk1 = Mon;
  wk2 = Tue;

  printf("Monの値は: %d\n", wk0);
  printf("Tueの値は: %d\n", wk1);
  printf("Wedの値は: %d\n", wk2);

  return 0;
}