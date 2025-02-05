//ch10lab1.c

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n[10];
    int i;
    int s = 0;

    srand(time(NULL));

    for(i = 0; i < 10; i++)
    {
        n[i] = rand() % 100;    // 0~99난수 생성
        s += n[i];              //합 구하기
        printf("%d ", n[i]);    //n[i] 출력
    }

    printf("\n");
    printf("평균: %d\n", s / 10);

    return 0;
}
