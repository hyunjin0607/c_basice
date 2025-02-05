//ch17ex_배열초기화.c

#include <stdio.h>
#define ARR_SIZE 5

int main()
{
    int i;
    int s = 0;
    int num[5];

    for(i = 0; i < ARR_SIZE; i++)
    {
        printf("%d번째 정수 입력: ", i + 1);
        scanf("%d", &num[i]);
    }
    for(i = 0; i < ARR_SIZE; i++)
    {
        printf("num[%d] = %d\n", i, num[i]);
        s += num[i];
    }
    printf("배열 num의 합계는 %d입니다.\n", s);

    return 0;
}
