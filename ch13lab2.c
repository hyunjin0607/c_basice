//ch13lab2.c

#include <stdio.h>

int main()
{
    int n1 = 1;
    int n2;
    int n3 = 0;

    printf("정수를 입력하세요:");
    scanf("%d", &n2);

    while(n1 <= n2)
    {
        n3 += n1;
        n1++;
    }

    printf("1 ~ %d까지의 합계는 %d", n2, n3);

    return 0;

}
