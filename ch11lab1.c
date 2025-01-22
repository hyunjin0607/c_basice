//ch11lab1.c

#include <stdio.h>

int main()
{
    int n1, n2;
    int result;

    printf("정수 두 개를 입력하세요: ");
    scanf("%d %d", &n1, &n2);

    result = (n1 > n2) ? n1 - n2 : n2 - n1;

    printf("%d", result);

    return 0;
}
