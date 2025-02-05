//ch17p1_array.c

#include <stdio.h>
#define ARR_SIZE     5

int main()
{
    int arr[ARR_SIZE] = {10, 20, 30, 40, 50};
    float farr[ARR_SIZE] =  {1.14, 3.14, 5.15};

    printf("arr의 1번째 값 arr[0]: %d\n", arr[0]);
    printf("arr의 2번째 값 arr[1]: %d\n", arr[1]);
    printf("arr의 3번째 값 arr[2]: %d\n", arr[2]);
    printf("arr의 4번째 값 arr[3]: %d\n", arr[3]);
    printf("arr의 5번째 값 arr[4]: %d\n", arr[4]);

    printf("\n----------------------------------------\n");

    for(int i = 0; i < ARR_SIZE; i++)
    {
        printf("arr의 %d번째 값 arr[%d]: %d\n",i + 1, i, arr[i]);
    }

    printf("\n----------------------------------------\n");
    for(int i = 0; i < ARR_SIZE; i++)
    {
        printf("arr의 %d번째 값 farr[%d]: %f\n",i + 1, i, farr[i]);
    }
    return 0;
}
