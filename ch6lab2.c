//ch6lab2.c

#include <stdio.h>

int main()
{
    float n1;
    float n2;

    printf("키 입력:");
    scanf("%f", &n1);
    printf("몸무게 입력:");
    scanf("%f", &n2);

    printf("당신의 몸무게는 %.1fcm이고, 몸무게는 %.1fkg이군요~", n1, n2);

    return 0;
}
