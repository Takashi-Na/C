#include<stdio.h>

int main(void)
{
  int x,y;

  for (x = 1; x <= 9; x++){
    for ( y = 1; y <= 9; y++)
    {
      printf("%3d", x * y);
    }
    printf("\n");
  }
  return 0;
}