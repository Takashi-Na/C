#include<stdio.h>

int getaverage(int *data);

int main(void)
{
  int avearge;
  int array[10] = {15, 78, 98, 15, 98, 85, 17, 35, 42, 15};
  avearge = getaverage(array);
  printf("%D\n", avearge);
  return 0;
}

int getaverage(int *data)
{
  int i, average;
  average = 0;

  for (i = 0; i < 10; i++)
  {
    average += data[i];
  }
  return average / 10;
}