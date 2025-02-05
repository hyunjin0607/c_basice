//ch10ex4_자료정렬.c
// bubble sort(거품 정렬)로 오른차순 구현

#include <stdio.h>
#define MAX 5

int main()
{
    int i, j;
    int temp;
    int num[MAX] = {93, 75, 50, 32, 16};

    for(i = 0; i < MAX - 1; i++)
    {
        for(j = 0; j < MAX - 1 - i; j++)
        {
            if(num[j] > num[j + 1]);
            {
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }

    printf("정렬후 배열 num:");
    for(i = 0; i <MAX; i++)
    {
        printf("%d ", num[i]);
    }

    printf("\n");

    return 0;
}
