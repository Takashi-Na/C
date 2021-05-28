#include<stdio.h>

int main(void)
{
  char str[16];
  char str1[12]="DRAGON";
  char str2[]="QUEST";
  int i = 3;
  sprintf(str, "%s%s%d\n", str1, str2, i);
  // sprintf(結果を記憶する配列名, 書式文字列, 各種変数);
  printf("%s",str);
  return 0;
}