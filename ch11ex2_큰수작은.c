//ch11ex2_큰수작은.c

#include <stdio.h>

int main()
{
    int n1, n2;
    int large;
    int small;

    printf("2개의 정수를 입력하세요: ");
    scanf("%d %d", &n1, &n2);

    large = (n1 > n2) ? n1 : n2;
    small = (n1 < n2) ? n1 : n2;

    printf("큰 수: %d\n", large);
    printf("작은 수: %d\n", small);
}
