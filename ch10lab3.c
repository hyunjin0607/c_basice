//ch10lab3.c

#include <stdio.h>

int main()
{
    int n1;

    printf("년도를 입력하세요:");
    scanf("%d", &n1);

    if((n1 % 4 ==0 &&  n1 % 100 != 0) || n1 % 400 == 0)
    {
        printf("운년이네요\n");
    }
    else
    {
        printf("운년이 아니네요\n");
    }

    return 0;
}
