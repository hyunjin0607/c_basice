//ch10ex2_합격자수.c

#include <stdio.h>
#define ARR_SIZE 5

int main()
{
    //int scores[5] = {77, 88, 66, 83, 92};
    int scores[ARR_SIZE];
    int cnt = 0;
    int max_scores = 0;

    for(int i = 0; i < ARR_SIZE; i++)
    {
        printf("%d번 점수는? ", i + 1);
        scanf("%d ", &scores[i]);

    }

    for(int i = 0; i < ARR_SIZE; i++)
    {
         printf("%d번 %d점 ", i + 1, scores[i]);
        if(scores[i] >= 80)
        {
            printf("합격\n");
            cnt++;
        }

        else
        {
            printf("불합격\n");
        }

        if(scores[i] >= max_scores)
        {
            max_scores = scores[i];
        }
    }

    printf("\n--------------------------\n");
    printf("80점 이상으로 합격한 학생은 %d명입니다.\n", cnt);
    printf("최고 성적: %d점\n", max_scores);

    return 0;
}
