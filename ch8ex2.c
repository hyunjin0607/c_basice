// ch8ex2_��ձ��ϱ�.c

#include <stdio.h>
#define CNT_SUBJECT  5

int main()
{
    int sum = 93;
    double avg;

    avg = sum / CNT_SUBJECT;
    printf("���: %.1f\n", avg);

    avg = (double)sum / CNT_SUBJECT;
    printf("���: %.1f\n", avg);

    return 0;
}


