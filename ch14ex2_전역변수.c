//ch14ex2_��������.c

#include <Stdio.h>
#define MAX_SIZE    5

int scores[MAX_SIZE];
float avg;

int main()
{
    input_score();
    compute_avg();
    print_avg();

    return 0;
}

void input_score()
{
    for(int i = 0; i < MAX_SIZE; i++)
    {
        printf("%d�� ������ �Է��ϼ���: ", i + 1);
        scanf("%d", &scores[i]);
    }
}

void compute_avg()
{
    int sum = 0;
    for(int i = 0; i < MAX_SIZE; i++)
    {
        sum += scores[i];
    }
    avg = (float)sum / MAX_SIZE;
}

void printline(int num)
{
    for(int i = 0; i < 20; i++) printf("-");
    printf("\n");
}



void print_avg()
{
    printf("\n");
    //printf("---------------\n");
    printline(12);
    printf("�б� ����ǥ\n");
    //printf("---------------\n");
     printline(12);

    printf("��ȣ\t����\n");
    for(int i = 0; i < MAX_SIZE; i++)
    {
        printf("%d\t%d\n", i + 1, scores[i]);
    }
    //printf("---------------\n");
     printline(12);

    printf("���:  %.1f��\n", avg);
}
