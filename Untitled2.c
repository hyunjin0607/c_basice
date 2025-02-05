//ch16lab.c
#include <stdio.h>
#include <ctype.h>

int main()
{
    char n1;

    printf("문자 하나를 입력하세요:");
    scanf("%c", &n1);

    if(islower(n1))
    {
        printf("%c는 소문자입니다.\n", n1);
    }
    else if(isupper(n1))
    {
        printf("%c는 대문자입니다.\n", n1);
    }
    else if(isdigit(n1))
    {
        printf("%c는 숫자입니다.\n", n1);
    }
    else
    {
        printf("%c는 대문자, 소문자, 숫자가 아닙니다.\n", n1);
    }

   return 0;
}
