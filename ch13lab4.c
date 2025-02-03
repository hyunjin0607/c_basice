//ch13lab4.c

#include <stdio.h>

int main()
{
    int n1;
    int n2 = 0;

    do
    {
        printf("정수를 입력하세요: ");
        scanf("%d", &n1);

        n2 += n1;


    }while(n1 != 0);

    printf("합계: %d", n2);

    return 0;
}
