//ch10ex3_최다득점경기.c

#include <stdio.h>

int main()
{
    int scores[5] = {10, 5, 8, 20, 16};
    int assist[5] = {7, 2, 10, 9, 15};
    int max_score = 0;
    int max_index;

    for(int i = 0; i < 5; i++)
    {
        printf("%d회차 경기 득점: %2d점, 어시스트: %2d회\n", i + 1, scores[i], assist[i]);
        if(scores[i] > max_score)
        {
            max_score = scores[i];
            max_index = i;
        }
    }

    printf("최다득점 경기는 %d회차\n", max_index + 1);
    printf("%d점 득점 %d회 어시스트\n", max_score, assist[max_index]);


    return 0;
}
