#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// カードの構造体定義
typedef struct
{
  int id;
  char suit;
} card_rec;

// 関数プロトタイプ宣言
void top();                        /*トップページ*/
void rule();                       /*ルール説明*/
void card_input(card_rec *card);   /*カードにスートと数字を代入*/
void card_show(card_rec *card);    /*カードの一覧表示*/
void card_shuffle(card_rec *card); /*カードをシャッフル*/
void game(card_rec *card);

int main()
{
  card_rec card[52]; /*カードの構造体を配列で定義*/

  top();
  card_input(card);
  game(card);

  return 0;
}

// トップページ
void top()
{
  int check;

  printf("\n");
  printf("*トップページ*\n");
  printf(" High&Low\n");
  printf("1.ゲーム開始\n2.ルール説明\n3.終了\n");
  scanf("%d", &check);

  if (check == 1)
  {
    printf("\n");
    printf("ゲーム開始\n");
  }
  else if (check == 2)
  {
    rule();
  }
  else if (check == 3)
  {
    printf("\n");
    printf("さようなら\n");
    exit(0);
  }
  else
  {
    printf("1 or 2 or 3を選んでください\n");
    if (check == 1)
    {
      printf("\n");
      printf("ゲーム開始\n");
    }
    else if (check == 2)
    {
      rule();
    }
    else if (check == 3)
    {
      printf("\n");
      printf("さようなら\n");
      exit(0);
    }
    else
    {
      printf("二度目はない");
      exit(0);
    }
  }
}

// ルール説明
void rule()
{
  int check;

  printf("\n");
  printf("*ルール説明*\n\n");

  printf("トランプゲームのHigh&Lowとルールはほとんど同じです。\n");
  printf("例) S8 : ???\n");
  printf("のように表示されるので、???が左に表示されているものより\n");
  printf("大きいか小さいかを当ててください。\n\n");

  printf("・数字の大小関係\n");
  printf("  1 < 2 < 3 < 4 < 5 < 6 < 7 < 8 < 9 < 10 < 11 < 12 < 13\n\n");

  printf("スートは以下のように略します\n");
  printf("C:クローバー\nD:ダイヤ\nH:ハート\nS:スペード\n\n");

  printf("スートに大小関係はありません\n");
  printf("同じ数だった場合はドローとなり、次の問題に進みます。\n\n");

  printf("1.トップページ\n2.終了\n");
  scanf("%d", &check);
  if (check == 1)
  {
    top();
  }
  else if (check == 2)
  {
    printf("\n");
    printf("さようなら\n");
    exit(0);
  }
  else
  {
    printf("1 or 2を選んでください\n");
    scanf("%d", &check);
    if (check == 1)
    {
      printf("\n");
      top();
    }
    else if (check == 2)
    {
      printf("\n");
      printf("さようなら\n");
      exit(0);
    }
    else
    {
      printf("二度目はない");
      exit(0);
    }
  }
}

// カードセット
void card_input(card_rec *card)
{
  int i;
  for (i = 0; i < 52; i++)
  {
    (card + i)->id = i % 13 + 1; /*番号を代入*/

    switch (i / 13) /*スートを代入*/
    {
      case 0:
        (card + i)->suit = 'S';
        break;
      case 1:
        (card + i)->suit = 'H';
        break;
      case 2:
        (card + i)->suit = 'D';
        break;
      case 3:
        (card + i)->suit = 'C';
        break;
    }
  }
  return;
}

// カードのセット確認
void card_show(card_rec *card)
{
  int i;
  for (i = 0; i < 52; i++)
  {
    printf("%c%d\n", (card + i)->suit, (card + i)->id);
  }
}

// カードをシャッフル
void card_shuffle(card_rec *card)
{
  int i, r, temp;               /*乱数を格納する変数、一時変数を定義*/
  char temp_c;                  /*文字の一時変数を定義*/
  srand((unsigned)time(NULL));  /*乱数に現在時刻を使用*/

  for (i = 0; i < 52; i++)
  {
    r = rand() % 52;            /*乱数を取得*/

    // 乱数で得た番号と配列の(card+i)番号と入れ替え
    temp = (card + i)->id;
    (card + i)->id = (card + r)->id;
    (card + r)->id = temp;

    // スート入れ替え
    temp_c = (card + i)->suit;
    (card + i)->suit = (card + r)->suit;
    (card + r)->suit = temp_c;
  }
}

// High_Low部分
void game(card_rec *card)
{
  int i, ans, flag;
  card_shuffle(card);

  for (i = 0; i < 51; i++)
  {
    // if ((card + i)->id == 1)
    // {
    //   (card + i)->id = 'A';
    // }
    // else if ((card + i)->id == 11)
    // {
    //   (card + i)->id = 'J';
    // }
    // else if ((card + i)->id == 12)
    // {
    //   (card + i)->id = 'Q';
    // }
    // else if ((card + i)->id == 13)
    // {
    //   (card + i)->id = 'K';
    // }

    printf("%c%d  ???\n\n", (card + i)->suit, (card + i)->id);
    printf("??? : High or Low?\n");
    printf("1.High\n2.Low\n");
    scanf("%d", &ans);

    printf("\n");
    printf("??? = %c%d\n", (card + (i + 1))->suit, (card + (i + 1))->id);
    flag = 0;
    if ((card + i)->id < (card + (i + 1))->id)
    {
      flag = 1;
    }
    else if ((card + i)->id > (card + (i + 1))->id)
    {
      flag = 2;
    }
    else
    {
      printf("ドロー\n");
      printf("---------------------------\n\n");
      continue;
    }

    if (ans == flag)
    {
      printf("正解\n");
      printf("Score:%d\n", i + 1);
      printf("---------------------------\n\n");
    }
    else
    {
      printf("不正解\n");
      printf("Total score：%d\n", i);
      printf("最初からやり直してね\n");
      break;
    }
  }
}