//ch12lab1.c

#include <stdio.h>

int main()
{
    int n1;

    printf("1~5 사이의 정수를 입력하세요:");
    scanf("%d", &n1);

    switch(n1)
    {
    case 1:
        printf("%d is one\n", n1);
        break;
    case 2:
        printf("%d is two\n", n1);
        break;
    case 3:
        printf("%d is three\n", n1);
        break;
    case 4:
        printf("%d is four\n", n1);
        break;
    case 5:
        printf("%d is five\n", n1);
        break;

    default:
        printf("1~5 사이의 정수를 입력하세요.");
        break;
    }

    return 0;
}
