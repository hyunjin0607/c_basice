//ch12ex1_2차원배열.c

#include <stdio.h>

int main()
{
    int a[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
        int b[4][4] = {0};
        int c[3][3] = {0};
        int n = 0;


    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j <3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            n += 5;
            b[i][j] = n;
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }



    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            c[i][j] = j + 1;

            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
