//ch15lab2

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void allocScore(int*, int);
int computeSum(int*, int);
void printScore(int*, int);

int main()
{
    int n;
    int* scores;
    int sum;
    float avg;

    srand((unsigned int)time(NULL));

    printf("학생수: ");
    scanf("%d", &n);

    scores = (int*)malloc(sizeof(int) * n);
    if(scores == NULL)
    {
        printf("점수 할당 실패로 종료합니다.\n");
    }
    allocScore(scores, n);
    sum = computeSum(scores, n);
    avg = (float)sum / n;

    printScore(scores, n);
    printf("총점: %d점\n", sum);
    printf("평균: %.1f점\n", avg);

    return 0;
}

void allocScore(int* p, int n)
{
    for(int i = 0; i < n; i++)
        p[i] = rand() % 101;
}

int computeSum(int* p, int n)
{
    int s = 0;
    for(int i = 0; i < n; i++)
        s += p[i];
    return s;
}

void printScore(int* p, int n)
{
    printf("성적표\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d번 %d점\n", i + 1, p[i]);
    }

    printf("\n");
}
