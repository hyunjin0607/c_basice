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

    printf("�л���: ");
    scanf("%d", &n);

    scores = (int*)malloc(sizeof(int) * n);
    if(scores == NULL)
    {
        printf("���� �Ҵ� ���з� �����մϴ�.\n");
    }
    allocScore(scores, n);
    sum = computeSum(scores, n);
    avg = (float)sum / n;

    printScore(scores, n);
    printf("����: %d��\n", sum);
    printf("���: %.1f��\n", avg);

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
    printf("����ǥ\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d�� %d��\n", i + 1, p[i]);
    }

    printf("\n");
}
