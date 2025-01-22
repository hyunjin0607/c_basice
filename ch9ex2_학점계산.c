// ch9ex2_학점계산.c

#include <stdio.h>

int main()
{
    int score;
    char grade;  // 학점 변수

    printf("평균 성적을 입력하세요: ");
    scanf("%d", &score);

    if(score >= 90)
    {
        grade = 'A';
    }
    else if(score >= 80)
    {
        grade = 'B';
    }
    else if(score >= 70)
    {
        grade = 'C';
    }
    else if(score >= 60)
    {
        grade = 'D';
    }
    else
    {
        grade = 'F';
    }
    printf("%d점은 \"%c\"학점 입니다.", score, grade);

    return 0;
}
