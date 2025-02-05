//ch09lab1.c

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n1;

    srand((unsigned int)time (NULL));

    for(int i = 0; i < 10; i++)
    {
        n1 = rand() % 100 + 1;
        printf("%d ", n1);
    }

    return 0;
}
