#include<stdio.h>

int main(void)
{
  char full_name[256];
  char first_name[256];
  char last_name[256];

  printf("名字?:");
  scanf("%256s", first_name);
  printf("名前?:");
  scanf("%256s", last_name);

  sprintf(full_name, "%s %s\n", first_name, last_name);
  printf("フルネーム:%s", full_name);
  return 0;
}
