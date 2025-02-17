//ch14lab3.c

#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    plus_one(arr);
    printf("plus_one È£Ãâ µÚ\n");

    for(int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
void plus_one(int* pArr)
{
    for(int i = 0; i < 5; i++)
    {
        pArr[i] += 1;
    }
    printf("\n");
}
