// 4人の学生の3科目のテスト2回分の合計を求めて表示するプログラムを作成せよ。点数は3次元配列に格納するものとし、合計を求める処理と点数を表示する処理を関数として実現すること
#include <stdio.h>

#define student 4
#define subject 3

void score_sum(int score_1[student][subject], int score_2[student][subject], int score_3[student][subject])
{
    for (int i = 0; i < student; i++)
    {
        for (int j = 0; j < subject; j++)
        {
            score_3[i][j] = score_1[i][j] + score_2[i][j];
        }
    }
    printf("2回のテストの合計点数です\n");
    for (int i = 0; i < student; i++)
    {
        printf("生徒%d\n", i + 1);
        for (int j = 0; j < subject; j++)
        {
            printf("%d ", score_3[i][j]);
        }
        printf("\n");
    }
}

int main(void)
{
    // 1回目のテストの点数を入力する
    int score_1[student][subject];
    int score_2[student][subject];
    int score_3[student][subject];
    printf("1回目のテストの結果を入力してください\n");
    for (int i = 0; i < student; i++)
    {
        for (int j = 0; j < subject; j++)
        {
            printf("生徒%dの科目%d:", i + 1, j + 1);
            scanf("%d", &score_1[i][j]);
        }
    }

    // 2回目のテスト
    printf("2回目のテストの結果を入力してください\n");
    for (int i = 0; i < student; i++)
    {
        for (int j = 0; j < subject; j++)
        {
            printf("生徒%dの科目%d:", i + 1, j + 1);
            scanf("%d", &score_2[i][j]);
        }
    }

    score_sum(score_1, score_2, score_3);

    return 0;
}