// ポインタn1, n2, n3が指す3つのint型整数を昇順にソートする関数を作成せよ

#include <stdio.h>

void sort(int *n1, int *n2, int *n3)
{
    int temp = 0;
    if (*n1 > *n2)
    {
        temp = *n1;
        *n1 = *n2;
        *n2 = temp;
    }
    if (*n2 > *n3)
    {
        temp = *n2;
        *n2 = *n3;
        *n3 = temp;
    }
    if (*n1 > *n2)
    {
        temp = *n1;
        *n1 = *n2;
        *n2 = temp;
    }
}
int main(void)
{
    int n1, n2, n3;
    printf("数字を3つ入力してください\n");
    printf("n1:");
    scanf("%d", &n1);
    printf("n2:");
    scanf("%d", &n2);
    printf("n3:");
    scanf("%d", &n3);
    printf("数字を昇順にソートします\n");
    sort(&n1, &n2, &n3);
    printf("n1:%d\n", n1);
    printf("n2:%d\n", n2);
    printf("n3:%d\n", n3);

    return 0;
}
