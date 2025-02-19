//ch15lab1.c

#include <stdio.h>

void input_scores(int *, int);
int compute_scores(int*, int);

int main()
{
    int n;
    int sum;
    float avg;
    int* scores;

    printf("학생수를 입력하세요! ");
    scanf("%d", &n);

    scores = (int*)malloc(sizeof(int) * n);
    input_scores(scores, n);
    sum = compute_scores(scores, n);
    avg = (float)sum / n;

    printf("\n");
    printf("학생들의 총점은 %d점이고, 평균은 %.1f점입니다.\n", sum, avg);

    free(scores);

    return 0;
}

int compute_scores(int*p, int n)
{
    int s = 0;
    for(int i = 0; i < n; i++)
        s += p[i];
    return s;
}

input_scores(int *p, int n)
{
    for(int i = 0; i <= n; i++)
    {
        printf("%d번째 학생의 점수를 입력하세요: ", i + 1);
        scanf("%d", &p[i]);
    }

    return n;

}
