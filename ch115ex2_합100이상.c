//ch115ex2_합100이상.c

#include <stdio.h>
#define TRUE     1

int main()
{
    int num = 1;
    int sum = 0;

    while(TRUE)
    {
        sum += num;
        if(sum >= 100) break;
        num++;
    }

    printf("1~%d까지의 합은 %d입니다.\n", num, sum);

    return 0;
}
