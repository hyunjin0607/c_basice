//ch10lab2.c

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE    10

int main()
{
    int i;
    int scores[SIZE];
    int max, min;

    srand(time(NULL)); //난수 시드 값 초기화


    // 10명의 점수 초기화
    for(i = 0; i < SIZE; i++)
    {
        scores[i] = rand() % 101;
    }


    // 1.최고점, 죄저점 찾기
    // 2. 최고, 최저 점수의 학생 번호 출력하기
    max = min = scores[0];
    for(i = 0; i < SIZE; i++)
    {

        if(scores[i] > max) max = scores[i];
        if(scores[i] < min) min = scores[i];
    }


    // 10명 점수 출력
    printf("점수: ");
    for(i = 0; i < SIZE; i++)
    {
        printf("%d ", scores[i]);
    }
    printf("\n");

    printf("최댓값은 %d,최솟값은 %d입니다.\n", max, min);

    return 0;
}
