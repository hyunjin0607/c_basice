// ch12lab2.c

#include <stdio.h>

int main()
{
    int i, j;
    int v = 0;
    int arr[4][4] = {0};

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)\
        {
            v += 2;
            arr[i][j] =v;
        }
    }

    for(int  i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            printf("%2d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
