#include <stdio.h>
#include <string.h>

typedef struct
{
  char name[256]; /*名前*/
  int age;      /*年齢*/
  int sex;      /*性別*/
} Pinfo;

void inputPinfo(Pinfo *data);
void showPinfo(Pinfo data);

int main(void)
{
  printf("以下を3人分入力してください\n");

  Pinfo data[2];
  int i;

  for (i = 0; i <= 2; i++)
  {
    inputPinfo(&data[i]);
  }
      for (i = 0; i <= 2; i++)
  {
    showPinfo(data[i]);
  }

  return 0;
}

void inputPinfo(Pinfo *data)
{
  printf("[名前]：");
  scanf("%s", data->name);
  printf("[年齢]：");
  scanf("%d", &data->age);
  printf("[性別](1-男,2-女,3-その他)：");
  scanf("%d", &data->sex);
  printf("\n");
}

void showPinfo(Pinfo data)
{
  char sex[16];

  printf("[名前]：%s\n", data.name);
  printf("[年齢]：%d\n", data.age);

  if (data.sex == 1) {
    strcpy(sex, "男");
  } else if (data.sex == 2){
    strcpy(sex, "女");
  } else {
    strcpy(sex, "その他");
  }

  printf("[性別]：%s\n", sex);
  printf("\n");
}