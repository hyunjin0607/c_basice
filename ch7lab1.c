// ch7lab1.c

#include <stdio.h>

int main()
{
    int n1;
    int n2;
    int q;
    int r;

    printf("첫번째 정수:");
    scanf("%d", &n1);

    printf("두번째 정수:");
    scanf("%d", &n2);

    q = n1/ n2;
    r = n1 % n2;

    printf("\n");
    printf("몫은 %d입니다.\n", q);
    printf("나머지는 %d입니다.\n", r);

    return 0;
}
