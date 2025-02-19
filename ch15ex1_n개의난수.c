//ch15ex1_n개의난수.c

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printArr(int* num, int n)
{
    for(int i = 0; i < n; i++)
        printf("%d ", num[i]);
    printf("\n");
}

int main()
{
    int i;
    int *ptr;
    int n;

    srand((unsigned int)time(NULL));

    printf("몇개의 난수를 생성할까요? ");
    scanf("%d", &n);
    ptr = (int*)malloc(sizeof(int) * n);

    if(ptr == NULL)
    {
        printf("메모리 할당 실패");
        exit(1);
    }

    for(i = 0; i < n; i++)
    {
        ptr[i] = rand() % 90 + 10;
    }

    printArr(ptr, n);


    return 0;
}
