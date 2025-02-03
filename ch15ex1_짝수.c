//ch15ex1_Â¦¼ö.c

#include <stdio.h>

int main()
{
    int i;

    for(i = 1; i < 20; i++)
    {
        if(i % 2 != 0) continue;

        printf("%d ", i);
    }

    printf("\n");
    for(i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= 5; j++)
        {
            printf("%d ", j);
            if(j == 3) break;
        }
        printf("\n");
    }

    return 0;
}
