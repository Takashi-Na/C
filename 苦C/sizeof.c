#include<stdio.h>

int main(void)
{
  int array[] = {1, 2, 3, 4, 5};
  int i;
  int array_count = sizeof(array) / sizeof(array[0]);

  for (i = 0; i < array_count; i++)
  {
    printf("array[%d] = %d\n", i, array[i]);
  }

  return 0;
}