// ch8ex2_Æò±Õ±¸ÇÏ±â.c

#include <stdio.h>
#define CNT_SUBJECT  5

int main()
{
    int sum = 93;
    double avg;

    avg = sum / CNT_SUBJECT;
    printf("Æò±Õ: %.1f\n", avg);

    avg = (double)sum / CNT_SUBJECT;
    printf("Æò±Õ: %.1f\n", avg);

    return 0;
}


