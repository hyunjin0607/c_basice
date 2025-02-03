//ch13p2_while.c

#include <stdio.h>

int main()
{
    int cnt = 1;
    while (cnt <= 10)
    {
        printf("cnt: %d\n", cnt);
        cnt++;
    }

    printf("----------------\n");
    cnt = 1;

    while (cnt <= 10)
    {
        if (cnt % 2 == 0)
        {
            printf("cnt: %d\n", cnt);
        }
        cnt++;
    }

    return 0;
}
