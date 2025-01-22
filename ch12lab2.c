//ch12lab2.c

#include <stdio.h>

int main()
{
    int n1, n2, result;
    char op;

    printf("두 개의 정수 입력: ");
    scanf("%d %d", &n1, &n2);

    printf("%d과 %d의 연산을 선택하세요(+, -, *, /, %):", n1, n2);
    scanf(" %c", &op);

    switch(op)
    {
    case '+':
        result = n1 + n2;
        break;
    case '-':
        result = n1 - n2;
        break;
    case '*':
        result = n1 * n2;
        break;
    case '/':
        result = n1 / n2;
        break;
    case '%':
        result = n1 % n2;
        break;
    default:
        printf("잘못된 연산자입니다.");
        break;
    }
        printf("%d %c %d 는 %d 입니다.\n", n1, op, n2, result);

    return 0;
}
