#include<stdio.h>

void maxmin(int array[], int *max, int *min);

int main(void)
{
  int array[10], max, min;
  int i = 0;

  do
  {
    printf("%d番目の数：",i + 1);
    scanf("%d", &array[i]);
    i++;
  } while (array[i - 1] != -1);

  maxmin(array, &max, &min);
  printf("最大値：%d\n", max);
  printf("最小値：%d\n", min);

  return 0;
}

void maxmin(int array[], int *max,int *min)
{
  int i = 0;

  *max = 0;
  *min = 100;

  while (array[i] != -1)
  {
    if (array[i] > *max) 
    {
      *max = array[i];
    }
    if (array[i] < *min)
    {
      *min = array[i];
    }
    i++;
  }
}