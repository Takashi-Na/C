#include<stdio.h>

int main(void)
{
  int water = 198;
  int milk = 138;
  double tax = 1.05;
  int money = 1000;
  int purchase = (water * 1 + milk * 2) * tax;
  int change = money - purchase;
  printf("お釣りは%dです", change);
  return 0;
}
