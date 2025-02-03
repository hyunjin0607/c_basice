//ch13lab1.c

#include <stdio.h>

int main()
{
    int n1 = 0;
    int n2 = 0;

    while(n1 < 3)
    {

       n1 += 1;

        printf("%d 번째 정수를 입력하세요: ", n1);
        scanf("%d", &n2);

        printf("입력된 정수는 %d입니다.\n", n2);
    }
    return 0;
}
