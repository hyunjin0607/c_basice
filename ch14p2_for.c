//ch14p2_for.c

#include <stdio.h>

int main()
{
    int i = 0;
    for(i = 0; i < 5; i++)
    {
        //printf("*****\n");
        for(int j = 0; j < 20; j++)
        {
            printf("*");
        }
        printf("\n");
    }


    printf("\n\n");

    for(i = 1; i <= 3; i++)
    {
        for(int j = 1; j <= 5; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;

}
