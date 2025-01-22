//ch10lab1.c

#include <stdio.h>

int main()
{
    int result;
    int num = 25;
    char ch = 'a';

    //num이 10보다 크거나 같고, 30 보다 작다면
    result = (num >= 10 && num < 30);
    printf("num이 10보다 크거나 같고, 30보다 작다면:%d\n", result);

    result = (num % 3 == 0 && num % 5 == 0);
    printf("num이 3의 배수이거나 5의 배수라면:%d\n", result);

    result = (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <='z');
    printf("대문자 ch가 대문자 또는 소문자라면: %d\n", result);

    result = !(ch >= '0' && ch <= '9'); //not !
    printf("문자 ch가 숫자문자가 아니라면: %d\n", result);

    return 0;
}
