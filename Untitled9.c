// ch14p1_for.c

#include <stdio.h>

int main()
{
    int i;
    int s = 0;
    for(i = 1; i <= 10; i++)
    {
        s += i;
        printf("i = %d, s = %d\n", i, s);
    }
    printf("----------------\n");
    printf("for 종료 후 i: %d\n", i);

    for(i = 5; i >= 1; i--)
    {
        printf("i = %d\n",i);
    }
    printf("----------------\n");
    printf("for 종료 후 i: %d\n", i);

    for(i = 2; i <= 10; i += 2)
    {
        printf("i = %d\n",i);
    }
    printf("----------------\n");
    printf("for 종료 후 i: %d\n", i);

    for(i = 9; i >= 1; i -= 2)
    {
        printf("i = %d\n",i);
    }
    printf("----------------\n");
    printf("for 종료 후 i: %d\n", i);


    return 0;
}
