//ch14ex_난수반환.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE  10

void randint(int*);
void printarr(int*);

int main()
{
    int n[SIZE];

    srand((unsigned int)time(NULL));

    randint(n);
    printf("난수: ");
    printarr(n);

    return 0;
}

void randint(int* t)
{
    for(int i = 0; i < SIZE; i++)
    {
        t[i] = rand() % 90 + 10;
    }
}

void printarr(int* t)
{
    for(int i = 0; i <SIZE; i++)
    {
        printf("%d ", t[i]);
    }
    printf("\n");
}
