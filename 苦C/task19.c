#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
  char name[256]; /*名前*/
  int age;        /*年齢*/
  int sex;        /*性別*/
} Pinfo;

void inputPinfo(Pinfo *data);
void showPinfo(Pinfo data);

int main(void)
{
  int i,count,datasize;
  Pinfo *data;

  datasize = 10;
  data = (Pinfo *)malloc(sizeof(Pinfo) * datasize);

  printf("名前、年齢性別を入力してください（入力が終わった場合は名前欄にendと入力してください）")
  count = 0;
  while (1)
  {
    inputPinfo(&data[count]);
    // 名前にendを入力で終了
    if (data[count].name == end)
      break;
    count++;

    if (count >= datasize)
    {
      datasize += 10;
      data = (Pinfo *)realloc(data, sizeof(Pinfo) * datasize);
    }
  }

  for (i = 0; i < count; i++)
  {
    showPinfo(data[i]);
  }

  free(data);

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

  if (data.sex == 1)
  {
    strcpy(sex, "男");
  }
  else if (data.sex == 2)
  {
    strcpy(sex, "女");
  }
  else
  {
    strcpy(sex, "その他");
  }

  printf("[性別]：%s\n", sex);
  printf("\n");
}