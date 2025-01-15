//ch04lab3.c

#include <stdio.h>

int main()
{
    float k;
    float e;
    float t;

    k = 80.5;
    e = 93.7;
    t = k + e;

    printf("국어\t영어\n");
    printf("%.1f\t%.1f\n", k, e);
    printf("____________________\n");
    printf("합계는%.1f점 입니다.\n", t);

    return 0;
}
