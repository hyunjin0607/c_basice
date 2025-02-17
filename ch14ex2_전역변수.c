//ch14ex2_전역변수.c

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
        printf("%d번 성적을 입력하세요: ", i + 1);
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
    printf("학급 겅적표\n");
    //printf("---------------\n");
     printline(12);

    printf("번호\t점수\n");
    for(int i = 0; i < MAX_SIZE; i++)
    {
        printf("%d\t%d\n", i + 1, scores[i]);
    }
    //printf("---------------\n");
     printline(12);

    printf("평균:  %.1f점\n", avg);
}
