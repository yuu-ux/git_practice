// nのさす値が0より小さければ、0に更新し、100より大きければ100に更新する（値が0〜１００であれば更新しない）関数abjust_pointを使用する
#include <stdio.h>

void abjust_point(int *p)
{
    if (*p < 0)
    {
        *p = 0;
    }
    else if (*p > 100)
    {
        *p = 100;
    }
}

int main()
{
    int x;
    printf("点数を入力してください\n");
    scanf("%d", &x);
    abjust_point(&x);
    printf("点数は%dです\n", x);
    return 0;
}
