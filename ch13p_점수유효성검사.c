//ch13p_점수유효성검사.c

#include <stdio.h>

int main()
{
    int score = 1;

    do
    {
        printf("정수를(0~100)를 입력하세요: ");
        scanf("%d", &score);
    }while(score < 0 || score > 100);

    printf("입력된 점수는 %d점입니다.\n", score);


    return 0;
}
