//ch13ex1_정수합.c

#include <stdio.h>

int main()
{
    int num;
    int cnt = 0;
    int sum = 0;

    while (cnt < 5)
    {
        printf("정수입력");
        scanf("%d", &num);

        sum += num;

        printf("num: %d, sum: %d \n", num, sum);
        cnt++;
    }

    printf("\n---------------------------\n");
    printf("합계:%d \n", sum);

    return 0;
}
