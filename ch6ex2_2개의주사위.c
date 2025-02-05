//ch6ex2_2개의주사위.c

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dice;

    srand((unsigned int)time(NULL));
    for(int i = 0; i < 5; i++)
    {
        dice = rand() % 6 + 1;
        printf("첫번쨰 주사위 눈금:%d\n", dice);
    }

    printf("\n--------------------\n");

    int num;

    for(int i = 0; i < 20; i++)
    {
        num = rand() % 10 + 1;
        printf("%d ", num);
    }

    printf("\n-------------------------------------\n");

    int n1;

    for(int i = 0; i < 20; i++)
    {
        n1 = rand() % 51 + 100;
        printf("%d ", n1);
    }


    printf("\n--------------------------------------\n");

    for(int i = 0; i < 20; i++)
    {
        //n1 = rand() % 26 + 65;
        n1 = rand() % 26 + 'a';
        printf("%c ", n1);
    }

    return 0;
}
