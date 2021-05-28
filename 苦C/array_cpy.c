#include<stdio.h>
#include<memory.h>

int main()
{
  int array1[] = {1, 2, 3, 4, 5};
  int array2[] = {10, 20, 30, 40, 50};
  int i;
  int array2_count = sizeof(array2) / sizeof(array2[0]);

  for (i = 0; i < array2_count; i++)
  {
    printf("array2[%d] = %d\n", i, array2[i]);
  }

  // array1の要素をarray2にコピー
  memcpy(array2, array1, sizeof(array1));

  for (i = 0; i < array2_count; i++)
  {
    printf("array2[%d] = %d\n", i, array2[i]);
  }

  return 0;
}