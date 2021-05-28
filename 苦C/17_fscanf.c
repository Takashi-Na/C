#include <stdio.h>

int main(void)
{
  int i, j;
  FILE *file;
  file = fopen("test.txt", "r");
  fscanf(file, "%d,%d", &i, &j);
  fclose(file);
  printf("i = %d : j = %d\n", i, j);
  return 0;
}
