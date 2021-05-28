#include <stdio.h>  //標準入出力
#include <stdlib.h> //乱数生成
#include <time.h>   //乱数の種に現在時刻を使用

//カードの構造体定義
typedef struct
{
  int no;
  char mark;
} card_rec;

//関数プロトタイプ宣言
void card_input(card_rec *card);   //カードに数字とマークを代入
void card_shuffle(card_rec *card); //カードをシャッフル
void card_output(card_rec *card);  //カードを表示
void card_sort(card_rec *card);    //シャッフルしたカードを降順に表示

//メイン関数
int main()
{
  card_rec card[52]; //カード構造体を配列で定義
  card_input(card);
  card_output(card);
  card_shuffle(card);
  card_output(card);
  card_sort(card);
  card_output(card);
}

void card_input(card_rec *card)
{
  int i;
  for (i = 0; i < 52; i++)
  {

    /*構造体の先頭アドレスをポインタで受け取っているので、
		  cardは配列の先頭アドレスを示す。*/

    /*次のようにiを13で割った余りに1を加えるという処理をすると、
		　1～13までの数列4つを配列に代入できる。*/
    (card + i)->no = i % 13 + 1;

    switch (i / 13)
    { //マークを代入
    case 0:
      (card + i)->mark = 's';
      break;

    case 1:
      (card + i)->mark = 'q';
      break;

    case 2:
      (card + i)->mark = 'h';
      break;

    case 3:
      (card + i)->mark = 'd';
      break;
    }
  }
  printf("\n--------------------------------\n入力した状態\n");
}

void card_shuffle(card_rec *card)
{
  int i, r, tmp_n;             //乱数を格納する変数と一時変数を定義
  char tmp_m;                  //一時変数
  srand((unsigned)time(NULL)); //乱数の種に現在時刻を使用
  for (i = 0; i < 52; i++)
  {
    r = rand() % 52; //乱数を取得

    /*乱数で得た番号と配列の(先頭+i)番号を入れ替え*/
    tmp_n = (card + i)->no;
    (card + i)->no = (card + r)->no;
    (card + r)->no = tmp_n;

    /*マークを入れ替え*/
    tmp_m = (card + i)->mark;
    (card + i)->mark = (card + r)->mark;
    (card + r)->mark = tmp_m;
  }
  printf("\n--------------------------------\nシャッフルした状態\n");
}

void card_output(card_rec *card)
{
  int i;
  printf("--------------------------------\n");
  for (i = 0; i < 52; i++)
  {
    printf("%d %c\n", (card + i)->no, (card + i)->mark);
  }
}

/*バブルソートアルゴリズム*/
void card_sort(card_rec *card)
{
  int x, y, tmp_n;
  char tmp_m;
  for (x = 0; x < 52; x++)
  {
    for (y = 51; y > x; y--)
    {
      if ((card + y)->no > (card + y - 1)->no)
      {
        /*数字入れ替え*/
        tmp_n = (card + y)->no;
        (card + y)->no = (card + y - 1)->no;
        (card + y - 1)->no = tmp_n;

        /*マーク入れ替え*/
        tmp_m = (card + y)->mark;
        (card + y)->mark = (card + y - 1)->mark;
        (card + y - 1)->mark = tmp_m;
      }
    }
  }
  printf("\n--------------------------------\nシャッフルしたあと降順にした状態\n");
}