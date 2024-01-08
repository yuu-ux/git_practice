#include <stdio.h>

typedef struct
{
    char name[64];
    char gendar[64];
    int num;
} status;

#define STUDENT 3

void line()
{
    for (int i = 0; i < 20; i++)
    {
        printf("-");
    }
    printf("\n");
}

int main()
{
    status student[STUDENT] = {
        {"太郎", "男", 1},
        {"花子", "女", 2},
        {"二郎", "男", 3}};

    for (int i = 0; i < STUDENT; i++)
    {
        printf("名前は%sです:アドレス%p\n", student[i].name, student[i].name);
        printf("性別は%sです:アドレス%p\n", student[i].gendar, student[i].gendar);
        printf("出席番号は%d番です:アドレス%p\n", student[i].num, &student[i].num);
        line();
    }
    return 0;
}
