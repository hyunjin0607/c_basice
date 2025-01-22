//ch07lab6.c

#include <stdio.h>

int main()
{
    char n1;

    printf("영문 소문자를 입력하세요:");
    scanf("%d", &n1);

    if (n1 == 'a' || n1 == 'e' || n1 == 'i' || n1 == 'o' || n1 == 'u')
    {
        printf("%d는 모음입니다.", n1);
    }
}
