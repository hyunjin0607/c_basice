//ch14lab1.c

#include <stdio.h>

int main()
{
    int num[5] = {10, 20, 30, 40, 50};
    int* pNum;
    int i;

    pNum = num;

    for(i = 0; i <5; i++)
    {
        *(pNum + i) += 1;
    }
    for(i = 0; i < 5; i++)
    {
        printf("num[%d]: %d, *(pNum + %d): %d\n", i, num[i], i, *(pNum + i));
    }

    return 0;

}
