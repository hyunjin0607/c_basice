// ch7ex3_평균구하기.c


/*
3과목(python, java, c)성적을 입력 받아
평균(avg)을 구해 출력하기
*/

#include <stdio.h>

int main()
{
    int python;
    int java;
    int c;
    int sum;
    float avg;

    printf("python, java, c성적을 공백으로 구분하세요:");
    scanf("%d %d %d", &python, &java, &c);

    sum = python + java + c;
    avg = (float)sum / 3;
    printf("\n");
    printf("총점: %d점, 평균: %.1f점\n", sum, avg);

    return 0;
}
