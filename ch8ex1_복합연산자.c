// ch8ex1_복합연산자.c

#include <stdio.h>

int main()
{
    int cnt;
    cnt = 0;

    cnt = cnt + 1;
    printf("cnt: %d\n", cnt);

    cnt += 1;
    printf("cnt: %d\n", cnt);  // 2

    printf("cnt: %d\n", cnt += 1);  // 3

    cnt += 2;
    printf("cnt: %d\n", cnt);  // 5

    cnt -= 1;
    printf("cnt: %d\n", cnt);  // 4
    printf("cnt: %d\n", cnt -= 2);  // 2

    return 0;
}
