//ch14lab2.c

#include <stdio.h>

int main()
{
    int a, b;

    printf("정수 2개를 입력하세요(작은 수 큰 수 순서로): ");
    scanf("%d %d", &a, &b);

    printf("홀수들:");
    for(int n1 = a; n1 <= b; n1++)
    {
        if(n1 % 2 == 1)
        {
            printf("%d ", n1);
        }
    }

    return 0;

}
