#include<stdio.h>
#include<string>

typedef struct
{
  int year;       /* 学年 */
  int clas;       /* クラス */
  int number;     /* 出席番号 */
  char name[64];  /* 名前 */
  double stature; /* 身長 */
  double weight;  /* 体重 */
} student;

void student_point();

int main(void)
{
  student data;

  data.year = 3;
  data.clas = 4;
  data.number = 18;
  strcpy(data.name, "MARIO");
  data.stature = 168.2;
  data.weight = 72.4;

  student_point(&data);

  return 0;
}

void student_point(student *data)
{
  // ->記号でアクセス
  printf("[学年]：%d\n", data->year);
  printf("[クラス]：%d\n", data->clas);
  printf("[出席番号]：%d\n", data->number);
  printf("[名前]：%d\n", data->name);
  printf("[身長]：%d\n", data->stature);
  printf("[体重]：%d\n", data->weight);

  return;
}
