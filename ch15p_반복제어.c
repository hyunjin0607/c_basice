//ch15p_반복제어.c

#include <stdio.h>

int main()
{
    int i;

    for(i = 1; i <= 10; i++)
    {
        //if (i == 5) break;
        if(i == 5) continue; //i가 5면 아래 코드를 실행하지 않고 반복
        printf("i: %d\n", i);
    }

    return 0;
}
