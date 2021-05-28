#include<stdio.h>

int main(void)
{
  FILE *file;
  file = fopen("17_datfile.dat", "wb");
  fclose(file);
  return 0;
}
