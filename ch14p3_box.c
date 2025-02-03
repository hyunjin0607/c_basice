//ch14p3_box.c

#include <stdio.h>

int main()
{
    int i = 0;

    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= 5; j++)
        {
            if(i == j)
            {
               printf("%d ", j) ;
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }

    return 0;
}
