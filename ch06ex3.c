//ch06ex3.c

#include <stdio.h>

int main()
{
    char ch1;
    char ch2;

    printf("영문 한글자를 입력하세요:");
    scanf("%c", &ch1);
    printf("영문 한글자를 입력하세요:");
    scanf(" %c", &ch2);

    printf("입력된 문자는 %c입니다.\n", ch1);
    printf("입력된 문자는 %c입니다.\n", ch2);

    return 0;
}
