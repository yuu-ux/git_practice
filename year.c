// 1年の日付を表示する
// yearは2000年から2020年までとする
#include <stdio.h>

int is_leap_year(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int get_days_in_month(int year, int month)
{
    if (month == 2 && is_leap_year(year))
    {
        return 29;
    }
    return month_days[month - 1];
}

static const int month_days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

void increment_date(int *y, int *m, int *d)
{
    if (*d < month_days[*m - 1]) // 月末判定 m-1で*m月の最終日付を取得する
    {
        (*d)++;
    }
    else
    {
        if (*m == 12)
        {
            (*y)++;
            *m = 1;
            *d = 1;
        }
        else
        {
            (*m)++;
            *d = 1;
        }
    }
}

void decrement_date(int *y, int *m, int *d)
{
    // 今は先月の最終日じゃなくて、31に固定しちゃってるからここを先月の最終日に変更する

    if (*d != 1)
    {
        (*d)--;
    }
    else
    {
        if (*m == 1)
        {
            (*y)--;
            *m = 12;
            *d = month_days[*m - 1];
        }
        else
        {
            (*m)--;
            *d = month_days[*m - 1];
        }
    }
}

int main()
{
    // int year[YEAR];
    // int month[MONTH];
    // int day[DAY];
    int year;
    int month;
    int day;

    printf("日付を入力してください\n");
    printf("年：");
    scanf("%d", &year);
    printf("月：");
    scanf("%d", &month);
    printf("日：");
    scanf("%d", &day);

    // increment_date(&year, &month, &day);
    // printf("%d年%d月%d日\n", year, month, day);
    decrement_date(&year, &month, &day);
    printf("%d年%d月%d日\n", year, month, day);

    return 0;
}
