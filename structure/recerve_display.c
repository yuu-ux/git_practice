// int型とlong型とdouble型の3個の要素で構成されるxyz構造体を定義するとともに、キーボードから読み込んだ3値をもつxyz構造体型の値を返却する関数を作成せよ。

#include <stdio.h>
typedef struct
{
    int x;
    long y;
    double z;
} xyz;

xyz temp;
// 構造体の値を受け取る
void receive()
{
    printf("整数を入力:");
    scanf("%d", &temp.x);
    printf("大きな整数を入力:");
    scanf("%ld", &temp.y);
    printf("実数を入力:");
    scanf("%lf", &temp.z);
}

// それを表示させる
void display()
{
    printf("------------------------\n");
    printf("%d\n", temp.x);
    printf("%ld\n", temp.y);
    printf("%f\n", temp.z);
}

int main()
{
    receive();
    display();
    return 0;
}
