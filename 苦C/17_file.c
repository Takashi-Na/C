#include<stdio.h>

int main(void)
{
  int i = 100;
  FILE *file;
  file = fopen("17_file.txt", "w");
  fprintf(file, "Hello,world\n");
  fprintf(file, "%d", i);
  fclose(file);
  return 0;
}