//ch14ex10_��հ��.c

#include <stdio.h>

#define MAX_NO  5

void input_score(int scores[]);
float compute_avg(int scores[]);
void print_avg(float avg);

int main()
{
    int scores[MAX_NO];
    float avg;

    input_score(scores);
    //printf("1�� ����: %d\n", scores[0]);
    avg = compute_avg(scores);
    print_avg(avg);

    return 0;
}

void input_score(int scores[])
{
    for(int i = 0; i < MAX_NO; i++)
    {
        printf("%d�� �л� ����:", i + 1);
        scanf("%d", &scores[i]);
    }
}

float compute_avg(int scores[])
{
    int avg;
    float sum = 0;
    for(int i = 0; i < MAX_NO; i++)
    {
        sum += scores[i];
    }
    avg = (float)sum / MAX_NO;
    return avg;
}

void print_avg(float avg)
{
    printf("����� %.1f�� �Դϴ�.\n", avg);

}
