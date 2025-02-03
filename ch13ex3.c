//ch13ex3_덧셈반복.c

#include <stdio.h>

int main()
{
    int n1;
    int n2;

    char choice;

    do
    {
        printf("2개의 정수를 입력하세요: ");
        scanf("%d %d", & n1, &n2);

        printf("%d + %d = %d\n", n1, n2, n1 + n2);

        printf("다른 덧셈을 할까요?(y): ");
        scanf(" %c", &choice);
    }while(choice == 'Y' || choice == 'y');

    return 0;
}
