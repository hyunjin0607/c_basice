// ch8lab1.c

#include <stdio.h>

int main()
{
    int year = 0;  // 연도
    int sales;  // 매출액

    printf("첫해의 매출액을 입력하세요(만원단위): ");
    scanf("%d", &sales);

    printf("\n");

    year += 1;
    sales *= 1.1;  // 1.1 ---> 110%
    printf("%d년 뒤의 매출액은 %d만원입니다.\n", year, sales);

    year += 1;
    sales *= 1.1;  // 1.1 ---> 110%
    printf("%d년 뒤의 매출액은 %d만원입니다.\n", year, sales);

    return 0;
}
