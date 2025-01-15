// ch6ex2_실수입력.c

#include <stdio.h>

int main()
{
    float n1;
    double n2;

    printf("실수를 입력하세요:");
    scanf("%f", &n1);

    printf("실수를 입력하세요:");
    scanf("%f", &n2);

    printf("입력된 실수는 %f입니다.\n", n1);
    printf("입력된 실수는 %f입니다.\n", n2);

    return 0;
}
