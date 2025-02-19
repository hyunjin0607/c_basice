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

    printf("�л����� �Է��ϼ���! ");
    scanf("%d", &n);

    scores = (int*)malloc(sizeof(int) * n);
    input_scores(scores, n);
    sum = compute_scores(scores, n);
    avg = (float)sum / n;

    printf("\n");
    printf("�л����� ������ %d���̰�, ����� %.1f���Դϴ�.\n", sum, avg);

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
        printf("%d��° �л��� ������ �Է��ϼ���: ", i + 1);
        scanf("%d", &p[i]);
    }

    return n;

}
