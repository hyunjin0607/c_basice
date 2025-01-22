// ch10ex1_합격판정.c

#include <stdio.h>

int main()
{
    int kor, eng, math;
    int tot, avg;

    printf("국어, 영어, 수학 점수를 공백으로 구분해 입력하세요: ");
    scanf("%d %d %d", &kor, &eng, &math);

    tot = kor + eng + math;
    avg = tot/ 3;

    printf("총점: %d점, 평균: %d점\n", tot, avg);

    if(avg >= 70)
    {
        if(kor >= 40 && eng >= 40 && math >= 40)
        {
            printf("평균 %d점으로 합격입니다.", avg);
        }
        else
        {
            if(kor < 40)
            {
                printf("국어 ");
            }
            if(eng < 40)
            {
                printf("영어 ");
            }
            if(math < 40)
            {
                printf("수학 ");
            }
            printf("과목이 과락입니다. 불합격입니다.\n");
            //printf("40점 미만 과목이 있네요. 불합격입니다.\n");
        }
    }
    else
    {
        printf("평균 70점미만으로 불합격입니다.\n", avg);
    }

    return 0;
}
