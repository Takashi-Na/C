#include <stdio.h>

int main(void){
  int score = 0;

  do{
    if (score != 0)
      printf("点数は 0～100の範囲で入力して下さい。\n");
    printf("点数を入力して下さい:");
    scanf("%d", &score);
  } while (score < 0 || score > 100);

  printf("入力された点数 %d\n", score);

  return 0;
}